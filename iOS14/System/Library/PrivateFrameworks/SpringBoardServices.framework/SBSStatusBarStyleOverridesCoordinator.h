/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;
@interface SBSStatusBarStyleOverridesCoordinator : NSObject {

	int _styleOverrides;
	id<SBSStatusBarStyleOverridesCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int styleOverrides;                                                           //@synthesize styleOverrides=_styleOverrides - In the implementation block
-(id<SBSStatusBarStyleOverridesCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SBSStatusBarStyleOverridesCoordinatorDelegate>)arg1 ;
-(int)styleOverrides;
-(void)_registrationInvalidated:(id)arg1 ;
-(void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setRegisteredStyleOverrides:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

