/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherLiveContentOverlay;
@interface _SBFullScreenSwitcherLiveContentOverlayContext : NSObject {

	long long _overlayType;
	id<SBSwitcherLiveContentOverlay> _overlay;

}

@property (nonatomic,readonly) long long overlayType;                                 //@synthesize overlayType=_overlayType - In the implementation block
@property (nonatomic,readonly) id<SBSwitcherLiveContentOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
-(id)initWithOverlay:(id)arg1 overlayType:(long long)arg2 ;
-(id<SBSwitcherLiveContentOverlay>)overlay;
-(long long)overlayType;
@end

