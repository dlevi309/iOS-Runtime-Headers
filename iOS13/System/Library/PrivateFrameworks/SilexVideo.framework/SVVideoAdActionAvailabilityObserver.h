/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoAdActionAvailabilityObserver.h>

@protocol SVVideoAdActionAvailabilityObserver <NSObject>
@property (nonatomic,readonly) BOOL hasActionAvailable; 
@property (setter=onAvailabilityChanged:,nonatomic,copy) id availabilityChangedBlock; 
@required
-(id)availabilityChangedBlock;
-(BOOL)hasActionAvailable;
-(void)onAvailabilityChanged:(/*^block*/id)arg1;

@end


@protocol SVVideoAdProviding, SVVideoLoadingStateObserving;
@class NSString;

@interface SVVideoAdActionAvailabilityObserver : NSObject <SVVideoAdActionAvailabilityObserver> {

	BOOL _hasActionAvailable;
	/*^block*/id _availabilityChangedBlock;
	id<SVVideoAdProviding> _videoAdProvider;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;

}

@property (nonatomic,readonly) id<SVVideoAdProviding> videoAdProvider;                             //@synthesize videoAdProvider=_videoAdProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserving> loadingStateObserver;              //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (assign,nonatomic) BOOL hasActionAvailable;                                              //@synthesize hasActionAvailable=_hasActionAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onAvailabilityChanged:,nonatomic,copy) id availabilityChangedBlock;              //@synthesize availabilityChangedBlock=_availabilityChangedBlock - In the implementation block
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id<SVVideoAdProviding>)videoAdProvider;
-(void)setHasActionAvailable:(BOOL)arg1 ;
-(id)availabilityChangedBlock;
-(BOOL)hasActionAvailable;
-(void)onAvailabilityChanged:(/*^block*/id)arg1 ;
-(id)initWithVideoAdProvider:(id)arg1 loadingStateObserver:(id)arg2 ;
@end

