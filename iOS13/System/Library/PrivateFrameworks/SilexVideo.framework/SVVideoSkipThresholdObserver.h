/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoSkipThresholdObserving.h>

@protocol SVVideoSkipThreshold, SVVideoLoadingStateObserving;
@class NSString;

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving> {

	BOOL _loading;
	/*^block*/id block;
	id<SVVideoSkipThreshold> _thresholdProvider;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;

}

@property (nonatomic,readonly) id<SVVideoLoadingStateObserving> loadingStateObserver;              //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SVVideoSkipThreshold> thresholdProvider;                         //@synthesize thresholdProvider=_thresholdProvider - In the implementation block
@property (nonatomic,readonly) BOOL loading;                                                       //@synthesize loading=_loading - In the implementation block
@property (setter=onChange:,nonatomic,copy) id block; 
-(id)block;
-(BOOL)loading;
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SVVideoSkipThreshold>)thresholdProvider;
-(void)loadingCompletedWithThreshold:(double)arg1 ;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2 ;
@end

