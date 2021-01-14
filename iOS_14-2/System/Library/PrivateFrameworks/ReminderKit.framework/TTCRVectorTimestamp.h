/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTVectorTimestamp.h>

@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp {

	CRVectorTimestamp* _crTimestamp;

}

@property (nonatomic,retain) CRVectorTimestamp * crTimestamp;              //@synthesize crTimestamp=_crTimestamp - In the implementation block
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(id)init;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)setCrTimestamp:(CRVectorTimestamp *)arg1 ;
-(CRVectorTimestamp *)crTimestamp;
-(id)allUUIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
@end

