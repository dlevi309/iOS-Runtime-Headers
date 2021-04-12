/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CKDDeviceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _deviceIDs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceIDs;                 //@synthesize deviceIDs=_deviceIDs - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDeviceIDs:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deviceIDs;
-(id)deviceIdentifierForContext:(id)arg1 ;
-(id)_serviceForContext:(id)arg1 ;
-(CFDictionaryRef)createQueryForDeviceIdentifierInContext:(id)arg1 ;
-(id)deviceIdentifierForContext:(id)arg1 skipInMemoryCache:(BOOL)arg2 createIfNecessary:(BOOL)arg3 ;
-(id)_lookupKeyForContext:(id)arg1 ;
-(id)_savedDeviceIdentifierForContext:(id)arg1 ;
-(void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2 ;
-(void)_deleteDeviceIdentifierForContext:(id)arg1 ;
@end

