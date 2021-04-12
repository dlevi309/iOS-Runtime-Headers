/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUToolbarStateManagerDelegate;
@class NSMutableArray;

@interface HUToolbarStateManager : NSObject {

	id<HUToolbarStateManagerDelegate> _delegate;
	NSMutableArray* _pushedViewControllerStack;

}

@property (nonatomic,retain) NSMutableArray * pushedViewControllerStack;                     //@synthesize pushedViewControllerStack=_pushedViewControllerStack - In the implementation block
@property (assign,nonatomic,__weak) id<HUToolbarStateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<HUToolbarStateManagerDelegate>)delegate;
-(void)setDelegate:(id<HUToolbarStateManagerDelegate>)arg1 ;
-(void)setPushedViewControllerStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pushedViewControllerStack;
-(BOOL)_shouldRestoreToolbarButtons;
-(void)restoreStandardToolbarItems;
-(id)_instanceForBackButtonValues;
-(void)showBackButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)showSettingsButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)willPresentModalViewController:(id)arg1 ;
-(void)willDismissModalViewController:(id)arg1 ;
@end

