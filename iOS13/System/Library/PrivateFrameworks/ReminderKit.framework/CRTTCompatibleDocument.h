/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/CRDocument.h>

@class TTCRVectorMultiTimestamp, NSMutableArray;

@interface CRTTCompatibleDocument : CRDocument {

	TTCRVectorMultiTimestamp* _sharedTopotextTimestamp;
	NSMutableArray* _stringsWithClocksNeedingUpdating;
	NSMutableArray* _stringsWithClocksToResetAfterRealizingLocalChanges;

}

@property (nonatomic,retain) TTCRVectorMultiTimestamp * sharedTopotextTimestamp;                               //@synthesize sharedTopotextTimestamp=_sharedTopotextTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringsWithClocksNeedingUpdating;                                //@synthesize stringsWithClocksNeedingUpdating=_stringsWithClocksNeedingUpdating - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringsWithClocksToResetAfterRealizingLocalChanges;              //@synthesize stringsWithClocksToResetAfterRealizingLocalChanges=_stringsWithClocksToResetAfterRealizingLocalChanges - In the implementation block
-(void)realizeLocalChanges;
-(TTCRVectorMultiTimestamp *)sharedTopotextTimestamp;
-(NSMutableArray *)stringsWithClocksNeedingUpdating;
-(NSMutableArray *)stringsWithClocksToResetAfterRealizingLocalChanges;
-(id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4 topoTimestamp:(id)arg5 ;
-(id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4 ;
-(void)setSharedTopotextTimestamp:(TTCRVectorMultiTimestamp *)arg1 ;
-(void)setStringsWithClocksNeedingUpdating:(NSMutableArray *)arg1 ;
-(void)setStringsWithClocksToResetAfterRealizingLocalChanges:(NSMutableArray *)arg1 ;
-(unsigned long long)mergeResultForMergingWithDocument:(id)arg1 ;
-(void)mergeTimestampWithDocument:(id)arg1 ;
@end

