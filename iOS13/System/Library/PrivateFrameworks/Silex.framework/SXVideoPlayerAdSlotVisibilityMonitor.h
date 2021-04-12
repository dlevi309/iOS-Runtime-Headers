/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <SilexVideo/SVVisibilityMonitor.h>

@class SVKeyValueObserver;

@interface SXVideoPlayerAdSlotVisibilityMonitor : SVVisibilityMonitor {

	SVKeyValueObserver* _observer;

}

@property (nonatomic,readonly) SVKeyValueObserver * observer;              //@synthesize observer=_observer - In the implementation block
-(SVKeyValueObserver *)observer;
-(id)initWithVideoPlayerViewController:(id)arg1 videoAdSlotVisiblePercentageProvider:(id)arg2 ;
@end

