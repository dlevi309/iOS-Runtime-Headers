/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMutableDictionary;

@interface _DKSyncDeletedEventIDs : NSObject {

	NSMutableDictionary* _deletedEventIDsBySourceDeviceID;

}
-(id)init;
-(unsigned long long)count;
-(void)addDeletedEventID:(id)arg1 forSourceDeviceID:(id)arg2 ;
-(id)sourceDeviceIDs;
-(id)deletedEventIDsForSourceDeviceID:(id)arg1 ;
@end

