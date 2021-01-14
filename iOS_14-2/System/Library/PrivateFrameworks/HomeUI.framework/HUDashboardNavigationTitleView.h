/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@protocol HUDashboardNavigationTitleViewDelegate;
@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView {

	id<HUDashboardNavigationTitleViewDelegate> _delegate;
	double _previousLargeTitleHeight;

}

@property (assign,nonatomic,__weak) id<HUDashboardNavigationTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double previousLargeTitleHeight;                                         //@synthesize previousLargeTitleHeight=_previousLargeTitleHeight - In the implementation block
-(void)contentDidChange;
-(id<HUDashboardNavigationTitleViewDelegate>)delegate;
-(double)previousLargeTitleHeight;
-(void)setDelegate:(id<HUDashboardNavigationTitleViewDelegate>)arg1 ;
-(void)setPreviousLargeTitleHeight:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

