/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <ReminderKit/TTVectorTimestamp.h>

@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp {

	CRVectorTimestamp* _crTimestamp;

}

@property (nonatomic,retain) CRVectorTimestamp * crTimestamp;              //@synthesize crTimestamp=_crTimestamp - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(id)allUUIDs;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)setCrTimestamp:(CRVectorTimestamp *)arg1 ;
-(CRVectorTimestamp *)crTimestamp;
@end

