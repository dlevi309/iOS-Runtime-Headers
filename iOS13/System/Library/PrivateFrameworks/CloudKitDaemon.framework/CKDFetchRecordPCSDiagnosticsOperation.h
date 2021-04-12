/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation {

	NSArray* _zoneIDs;
	NSMutableArray* _fetchedZones;
	NSMutableArray* _mutableCorruptRecords;

}

@property (nonatomic,retain) NSArray * zoneIDs;                                   //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedZones;                       //@synthesize fetchedZones=_fetchedZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableCorruptRecords;              //@synthesize mutableCorruptRecords=_mutableCorruptRecords - In the implementation block
@property (nonatomic,readonly) NSArray * corruptRecords; 
-(void)main;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSArray *)corruptRecords;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(void)_fetchZones;
-(void)_checkRecordPCSForAllZones;
-(NSMutableArray *)fetchedZones;
-(NSMutableArray *)mutableCorruptRecords;
-(void)setFetchedZones:(NSMutableArray *)arg1 ;
-(void)setMutableCorruptRecords:(NSMutableArray *)arg1 ;
@end

