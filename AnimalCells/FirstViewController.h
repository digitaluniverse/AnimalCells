//
//  FirstViewController.h
//  AnimalCells
//
//  Created by mateo on 3/13/14.
//  Copyright (c) 2014 digitaluniverse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController{
    
    IBOutlet UIImageView *animalcell;
    IBOutlet UIButton *vacule;
    IBOutlet UIButton *ribosomes;
    IBOutlet UIButton *rougher;
    IBOutlet UIButton *motochondrion;
    IBOutlet UIButton *smoother;
    IBOutlet UIButton *cellmembrane;
    IBOutlet UIButton *lysosome;
    IBOutlet UIButton *nuclearmembrane;
    IBOutlet UIButton *nucleus;
    IBOutlet UIButton *nucleous;
    IBOutlet UIButton *cytoplasm;
    IBOutlet UIButton *golgiapparatus;
    IBOutlet UIButton *golgivesicle;
    IBOutlet UIButton *centrioles;
    IBOutlet UIButton *hide;
    
    
    IBOutlet UITextView *defvacule;
    IBOutlet UITextView *defribosomes;
    IBOutlet UITextView *defrougher;
    IBOutlet UITextView *defmotochondrion;
    IBOutlet UITextView *defsmoother;
    IBOutlet UITextView *defcellmembrane;
    IBOutlet UITextView *deflysosome;
    IBOutlet UITextView *defnuclearmembrane;
    IBOutlet UITextView *defnucleus;
    IBOutlet UITextView *defnucleous;
    IBOutlet UITextView *defcytoplasm;
    IBOutlet UITextView *defgolgiapparatus;
    IBOutlet UITextView *defgolgivesicle;
    IBOutlet UITextView *defcentrioles;
    
}

- (IBAction)hide:(id) sender;
- (IBAction)vacule:(id)sender;
- (IBAction)ribosome:(id)sender;
- (IBAction)rougher:(id)sender;
- (IBAction)mitochondrion:(id)sender;
- (IBAction)smoother:(id)sender;
- (IBAction)cellmembrane:(id)sender;
- (IBAction)lysosome:(id)sender;
- (IBAction)nuclearmembrane:(id)sender;
- (IBAction)nucleus:(id)sender;
- (IBAction)nucleous:(id)sender;
- (IBAction)cytoplasm:(id)sender;
- (IBAction)golgiapparatus:(id)sender;
- (IBAction)golgivesicle:(id)sender;
- (IBAction)centrioles:(id)sender;



@end
