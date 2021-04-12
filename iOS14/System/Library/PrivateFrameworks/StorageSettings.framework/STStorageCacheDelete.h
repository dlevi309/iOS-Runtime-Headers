/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


#import <StorageSettings/StorageSettings-Structs.h>
@class NSDictionary;

@interface STStorageCacheDelete : NSObject {

	int _cdNotifyToken;
	os_unfair_lock_s _updateLock;
	long long _totalPurgeable;
	NSDictionary* _itemsDict;
	BOOL _inited;

}
+(id)sharedMonitor;
-(id)init;
-(void)stopMonitor;
-(void)dealloc;
-(void)startMonitor;
-(id)cacheDeleteDict;
-(void)refreshPurgeableSpace;
-(long long)totalPurgeable;
@end

