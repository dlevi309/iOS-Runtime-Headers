/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PLResourceDataStore;
#import <Photos/Photos-Structs.h>
@class NSProgress, PLProgressFollower, NSString;

@interface PHServerResourceRequestRunner : NSObject {

	NSProgress* _progress;
	os_unfair_lock_s _lock;
	PLProgressFollower* _dataStoreFollower;
	id<PLResourceDataStore> _dataStore;
	long long _state;
	NSString* _taskIdentifier;

}

@property (nonatomic,readonly) NSString * taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(void)_safeReply:(/*^block*/id)arg1 ;
-(id)initWithTaskIdentifier:(id)arg1 ;
-(id)_assetAndRelatedObjectsFromAssetObjectIDURL:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)_cancelWithReply:(/*^block*/id)arg1 ;
-(void)_handleProgress:(id)arg1 ;
-(id)makeResourceAvailableWithRequest:(id)arg1 library:(id)arg2 clientBundleID:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)applyCorrectionsWithRequest:(id)arg1 errorCodes:(id)arg2 library:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)_resourceQualifiesForCacheMetricsCollection:(id)arg1 isLivePhoto:(BOOL)arg2 ;
-(void)_replyToVideoRequestWithURL:(id)arg1 mutableInfo:(id)arg2 internalInfo:(id)arg3 error:(id)arg4 pathForAdjustmentFileIfNeeded:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)chooseVideoWithRequest:(id)arg1 library:(id)arg2 clientBundleID:(id)arg3 reply:(/*^block*/id)arg4 ;
-(NSString *)taskIdentifier;
-(void)setState:(long long)arg1 ;
-(long long)state;
@end

