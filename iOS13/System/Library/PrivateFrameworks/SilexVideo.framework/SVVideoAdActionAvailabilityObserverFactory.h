/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoAdActionAvailabilityObserverFactory.h>

@protocol SVVideoAdActionAvailabilityObserverFactory <NSObject>
@required
-(id)createActionAvailabilityObserverForVideo:(id)arg1;

@end


@protocol SVVideoProviderProviding, SVVideoLoadingStateObserverFactory;
@class NSString;

@interface SVVideoAdActionAvailabilityObserverFactory : NSObject <SVVideoAdActionAvailabilityObserverFactory> {

	id<SVVideoProviderProviding> _videoProviderProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoProviderProviding> videoProviderProvider;                              //@synthesize videoProviderProvider=_videoProviderProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;              //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id)createActionAvailabilityObserverForVideo:(id)arg1 ;
-(id)initWithVideoProviderProvider:(id)arg1 loadingStateObserverFactory:(id)arg2 ;
-(id<SVVideoProviderProviding>)videoProviderProvider;
@end

