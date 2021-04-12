/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(NSArray *)passthroughViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)actionMenuGestureRecognized:(id)arg1 ;
-(void)setActionMenuView:(CKActionMenuView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canAffectStatusBarAppearance;
-(void)dismissViewWasTapped:(id)arg1 ;
-(void)presentActionMenuView:(id)arg1 fromPoint:(CGPoint)arg2 inView:(id)arg3 animated:(BOOL)arg4 ;
-(CKDismissView *)dismissView;
-(CKActionMenuView *)actionMenuView;
-(void)dismissActionMenuViewAnimated:(BOOL)arg1 ;
-(void)setDismissView:(CKDismissView *)arg1 ;
@end

