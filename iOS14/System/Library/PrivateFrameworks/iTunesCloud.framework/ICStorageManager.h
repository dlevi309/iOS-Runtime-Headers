/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICStorageManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,readonly) unsigned long long storageSpaceAvailable; 
@property (nonatomic,readonly) BOOL cachingEnabled; 
+(id)sharedManager;
-(id)init;
-(unsigned long long)storageSpaceAvailable;
-(void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)cachingEnabled;
@end

