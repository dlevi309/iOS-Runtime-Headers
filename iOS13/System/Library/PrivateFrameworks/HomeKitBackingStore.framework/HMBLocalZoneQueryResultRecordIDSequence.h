/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResult.h>

@class NSData, NSMutableSet;

@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult {

	NSData* _currentSequenceAsData;
	NSData* _lastReturnedSequence;
	NSMutableSet* _returnedIDs;

}

@property (nonatomic,retain) NSData * currentSequenceAsData;              //@synthesize currentSequenceAsData=_currentSequenceAsData - In the implementation block
@property (nonatomic,retain) NSData * lastReturnedSequence;               //@synthesize lastReturnedSequence=_lastReturnedSequence - In the implementation block
@property (nonatomic,retain) NSMutableSet * returnedIDs;                  //@synthesize returnedIDs=_returnedIDs - In the implementation block
-(id)nextObject;
-(id)fetchRow:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 sequenceBindOffset:(unsigned long long)arg4 arguments:(id)arg5 maximumRowsPerSelect:(unsigned long long)arg6 ;
-(NSData *)currentSequenceAsData;
-(void)setCurrentSequenceAsData:(NSData *)arg1 ;
-(NSData *)lastReturnedSequence;
-(void)setLastReturnedSequence:(NSData *)arg1 ;
-(void)setReturnedIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)returnedIDs;
-(id)fetchRowFromStatement:(sqlite3_stmtRef)arg1 skip:(BOOL*)arg2 updatedSequenceColumn:(id*)arg3 error:(id*)arg4 ;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 currentSequence:(id)arg2 error:(id*)arg3 ;
@end

