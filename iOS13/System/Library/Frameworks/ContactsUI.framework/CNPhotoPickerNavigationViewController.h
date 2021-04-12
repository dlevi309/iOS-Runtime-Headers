/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPortraitOnlyNavigationController.h>

@class CNPhotoPickerTrapView, NSArray;

@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController {

	BOOL _allowRotation;
	BOOL _disablingRotation;
	CNPhotoPickerTrapView* _trapOverlayView;
	NSArray* _trapOverlayConstraints;
	CGSize _previousSize;

}

@property (nonatomic,retain) CNPhotoPickerTrapView * trapOverlayView;              //@synthesize trapOverlayView=_trapOverlayView - In the implementation block
@property (nonatomic,retain) NSArray * trapOverlayConstraints;                     //@synthesize trapOverlayConstraints=_trapOverlayConstraints - In the implementation block
@property (assign,nonatomic) CGSize previousSize;                                  //@synthesize previousSize=_previousSize - In the implementation block
@property (assign,nonatomic) BOOL disablingRotation;                               //@synthesize disablingRotation=_disablingRotation - In the implementation block
@property (assign,nonatomic) BOOL allowRotation;                                   //@synthesize allowRotation=_allowRotation - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setAllowRotation:(BOOL)arg1 ;
-(void)endDisablingAutorotation;
-(void)beginDisablingAutorotation;
-(BOOL)shouldDisplayTrapOverlayView;
-(void)setupTrapOverlayView;
-(void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)arg1 ;
-(BOOL)allowRotation;
-(CNPhotoPickerTrapView *)trapOverlayView;
-(void)setTrapOverlayView:(CNPhotoPickerTrapView *)arg1 ;
-(NSArray *)trapOverlayConstraints;
-(void)setTrapOverlayConstraints:(NSArray *)arg1 ;
-(CGSize)previousSize;
-(void)setPreviousSize:(CGSize)arg1 ;
-(BOOL)disablingRotation;
-(void)setDisablingRotation:(BOOL)arg1 ;
@end

