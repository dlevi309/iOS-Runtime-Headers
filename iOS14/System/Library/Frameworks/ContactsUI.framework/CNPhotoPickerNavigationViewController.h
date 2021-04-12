/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPortraitOnlyNavigationController.h>

@class CNPhotoPickerTrapView, NSArray;

@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController {

	BOOL _allowRotation;
	BOOL _disablingRotation;
	BOOL _isShowingKeyboard;
	CNPhotoPickerTrapView* _trapOverlayView;
	NSArray* _trapOverlayConstraints;
	CGSize _previousSize;

}

@property (nonatomic,retain) CNPhotoPickerTrapView * trapOverlayView;              //@synthesize trapOverlayView=_trapOverlayView - In the implementation block
@property (nonatomic,retain) NSArray * trapOverlayConstraints;                     //@synthesize trapOverlayConstraints=_trapOverlayConstraints - In the implementation block
@property (assign,nonatomic) CGSize previousSize;                                  //@synthesize previousSize=_previousSize - In the implementation block
@property (assign,nonatomic) BOOL disablingRotation;                               //@synthesize disablingRotation=_disablingRotation - In the implementation block
@property (assign,nonatomic) BOOL isShowingKeyboard;                               //@synthesize isShowingKeyboard=_isShowingKeyboard - In the implementation block
@property (assign,nonatomic) BOOL allowRotation;                                   //@synthesize allowRotation=_allowRotation - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)previousSize;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setAllowRotation:(BOOL)arg1 ;
-(void)endDisablingAutorotation;
-(void)beginDisablingAutorotation;
-(BOOL)shouldDisplayTrapOverlayView;
-(BOOL)isDisplayingTrapView;
-(void)setupTrapOverlayView;
-(void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)arg1 ;
-(BOOL)allowRotation;
-(CNPhotoPickerTrapView *)trapOverlayView;
-(void)setTrapOverlayView:(CNPhotoPickerTrapView *)arg1 ;
-(NSArray *)trapOverlayConstraints;
-(void)setTrapOverlayConstraints:(NSArray *)arg1 ;
-(void)setPreviousSize:(CGSize)arg1 ;
-(BOOL)disablingRotation;
-(void)setDisablingRotation:(BOOL)arg1 ;
-(BOOL)isShowingKeyboard;
-(void)setIsShowingKeyboard:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dealloc;
@end

