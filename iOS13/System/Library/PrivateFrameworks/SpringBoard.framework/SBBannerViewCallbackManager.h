/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBUIBannerView, SBUIBannerSource;
@class UIView;

@interface SBBannerViewCallbackManager : NSObject {

	UIView*<SBUIBannerView> _view;
	id<SBUIBannerSource> _source;
	BOOL _sentWillAppear;
	BOOL _sentDidAppear;
	BOOL _sentWillDismiss;
	BOOL _sentDidDismiss;
	int _dismissReason;

}
-(id)init;
-(void)dealloc;
-(id)initWithBannerView:(id)arg1 ;
-(BOOL)hasSentAnyCallbacks;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)matchPreviousCallbacks:(id)arg1 ;
-(void)noteDidAppear;
@end

