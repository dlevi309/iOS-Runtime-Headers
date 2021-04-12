/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXVisibilityMonitor.h>

@class SVKeyValueObserver;

@interface SXVideoPlayerAdSlotVisibilityMonitor : SXVisibilityMonitor {

	SVKeyValueObserver* _observer;

}

@property (nonatomic,readonly) SVKeyValueObserver * observer;              //@synthesize observer=_observer - In the implementation block
-(SVKeyValueObserver *)observer;
-(id)initWithVideoPlayerViewController:(id)arg1 videoAdSlotVisiblePercentageProvider:(id)arg2 ;
@end

