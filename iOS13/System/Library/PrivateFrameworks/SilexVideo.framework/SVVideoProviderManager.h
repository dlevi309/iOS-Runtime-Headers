/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoProviderProviding.h>
#import <libobjc.A.dylib/SVVideoSkipThresholdProviding.h>
#import <libobjc.A.dylib/SVVideoEventTrackerProviding.h>
#import <libobjc.A.dylib/SVVideoURLProviderFactory.h>

@protocol SVVideoProviderFactory, SVVideoAdProviderFactory;
@class SVWeakObjectCache, NSString;

@interface SVVideoProviderManager : NSObject <SVVideoProviderProviding, SVVideoSkipThresholdProviding, SVVideoEventTrackerProviding, SVVideoURLProviderFactory> {

	id<SVVideoProviderFactory> _videoProviderFactory;
	id<SVVideoAdProviderFactory> _videoAdProviderFactory;
	SVWeakObjectCache* _videoProviders;
	SVWeakObjectCache* _videoAdProviders;

}

@property (nonatomic,readonly) id<SVVideoProviderFactory> videoProviderFactory;                  //@synthesize videoProviderFactory=_videoProviderFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoAdProviderFactory> videoAdProviderFactory;              //@synthesize videoAdProviderFactory=_videoAdProviderFactory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * videoProviders;                               //@synthesize videoProviders=_videoProviders - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * videoAdProviders;                             //@synthesize videoAdProviders=_videoAdProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)videoEventTrackerForVideo:(id)arg1 ;
-(id)videoAdProviderForVideo:(id)arg1 ;
-(SVWeakObjectCache *)videoProviders;
-(id<SVVideoProviderFactory>)videoProviderFactory;
-(id)videoProviderForVideo:(id)arg1 ;
-(SVWeakObjectCache *)videoAdProviders;
-(id<SVVideoAdProviderFactory>)videoAdProviderFactory;
-(id)skipThresholdForVideo:(id)arg1 ;
-(id)createURLProviderForVideo:(id)arg1 ;
-(id)initWithVideoProviderFactory:(id)arg1 videoAdProviderFactory:(id)arg2 ;
@end

