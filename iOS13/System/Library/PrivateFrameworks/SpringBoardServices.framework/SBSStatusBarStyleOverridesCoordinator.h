/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;
@interface SBSStatusBarStyleOverridesCoordinator : NSObject {

	int _styleOverrides;
	id<SBSStatusBarStyleOverridesCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int styleOverrides;                                                           //@synthesize styleOverrides=_styleOverrides - In the implementation block
-(void)dealloc;
-(id<SBSStatusBarStyleOverridesCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SBSStatusBarStyleOverridesCoordinatorDelegate>)arg1 ;
-(int)styleOverrides;
-(void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_registrationInvalidated:(id)arg1 ;
-(void)setRegisteredStyleOverrides:(int)arg1 reply:(/*^block*/id)arg2 ;
@end

