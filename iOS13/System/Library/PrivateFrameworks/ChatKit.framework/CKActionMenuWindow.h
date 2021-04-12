/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIAutoRotatingWindow.h>
#import <libobjc.A.dylib/CKDismissViewDelegate.h>

@class CKActionMenuView, CKDismissView, NSArray, NSString;

@interface CKActionMenuWindow : UIAutoRotatingWindow <CKDismissViewDelegate> {

	CKActionMenuView* _actionMenuView;
	CKDismissView* _dismissView;

}

@property (nonatomic,retain) CKActionMenuView * actionMenuView;              //@synthesize actionMenuView=_actionMenuView - In the implementation block
@property (nonatomic,retain) CKDismissView * dismissView;                    //@synthesize dismissView=_dismissView - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(CKDismissView *)dismissView;
-(void)setDismissView:(CKDismissView *)arg1 ;
-(void)actionMenuGestureRecognized:(id)arg1 ;
-(void)setActionMenuView:(CKActionMenuView *)arg1 ;
-(CKActionMenuView *)actionMenuView;
-(void)presentActionMenuView:(id)arg1 fromPoint:(CGPoint)arg2 inView:(id)arg3 animated:(BOOL)arg4 ;
-(void)dismissActionMenuViewAnimated:(BOOL)arg1 ;
-(void)dismissViewWasTapped:(id)arg1 ;
@end

