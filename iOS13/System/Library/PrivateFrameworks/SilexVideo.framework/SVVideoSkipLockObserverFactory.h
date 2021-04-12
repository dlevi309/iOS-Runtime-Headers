/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoSkipLockObserverFactory.h>

@protocol SVVideoSkipLockObserverFactory <NSObject>
@required
-(id)createSkipLockObserverForVideo:(id)arg1;

@end


@protocol SVVideoSkipThresholdObserverFactory;
@class SVTimeline, NSString;

@interface SVVideoSkipLockObserverFactory : NSObject <SVVideoSkipLockObserverFactory> {

	SVTimeline* _timeline;
	id<SVVideoSkipThresholdObserverFactory> _thresholdObserverFactory;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                                         //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipThresholdObserverFactory> thresholdObserverFactory;              //@synthesize thresholdObserverFactory=_thresholdObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createSkipLockObserverForVideo:(id)arg1 ;
-(SVTimeline *)timeline;
-(id<SVVideoSkipThresholdObserverFactory>)thresholdObserverFactory;
-(id)initWithTimeline:(id)arg1 thresholdObserverFactory:(id)arg2 ;
@end

