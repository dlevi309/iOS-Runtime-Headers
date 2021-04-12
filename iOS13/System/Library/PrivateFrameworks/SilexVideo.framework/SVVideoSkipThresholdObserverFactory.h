/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoSkipThresholdObserverFactory.h>

@protocol SVVideoSkipThresholdObserverFactory <NSObject>
@required
-(id)createThresholdObserverForVideo:(id)arg1;

@end


@protocol SVVideoSkipThresholdProviding, SVVideoLoadingStateObserverFactory;
@class NSString;

@interface SVVideoSkipThresholdObserverFactory : NSObject <SVVideoSkipThresholdObserverFactory> {

	id<SVVideoSkipThresholdProviding> _skipThresholdProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoSkipThresholdProviding> skipThresholdProvider;                         //@synthesize skipThresholdProvider=_skipThresholdProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;              //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id)createThresholdObserverForVideo:(id)arg1 ;
-(id)initWithSkipThresholdProvider:(id)arg1 loadingStateObserverFactory:(id)arg2 ;
-(id<SVVideoSkipThresholdProviding>)skipThresholdProvider;
@end

