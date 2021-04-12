/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class NSDictionary;

@interface STStorageCacheDelete : NSObject {

	int _cdNotifyToken;
	NSDictionary* _cdDict;

}

@property (retain) NSDictionary * cdDict;              //@synthesize cdDict=_cdDict - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)stopMonitor;
-(void)startMonitor;
-(id)cacheDeleteDict;
-(void)refreshPurgeableSpace;
-(NSDictionary *)cdDict;
-(void)setCdDict:(NSDictionary *)arg1 ;
@end

