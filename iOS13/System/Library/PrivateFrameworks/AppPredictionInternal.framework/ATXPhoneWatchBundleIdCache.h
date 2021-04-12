/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSMutableDictionary, NSUserDefaults, LSApplicationProxy;

@interface ATXPhoneWatchBundleIdCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _phoneToWatchCache;
	NSMutableDictionary* _watchToPhoneCache;
	NSUserDefaults* _appPredictionDefaults;
	LSApplicationProxy* _mockLSApplicationProxy;

}

@property (nonatomic,retain) LSApplicationProxy * mockLSApplicationProxy;              //@synthesize mockLSApplicationProxy=_mockLSApplicationProxy - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)updateMappings;
-(id)watchBundleIdForPhoneBundleId:(id)arg1 ;
-(id)phoneBundleIdForWatchBundleId:(id)arg1 ;
-(void)_saveCacheToUserDefaults;
-(void)_updatePhoneToWatchCache;
-(LSApplicationProxy *)mockLSApplicationProxy;
-(void)setMockLSApplicationProxy:(LSApplicationProxy *)arg1 ;
@end

