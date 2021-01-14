/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation {

	NSArray* _zoneIDs;
	NSMutableArray* _fetchedZones;
	NSMutableArray* _mutableCorruptRecords;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * zoneIDs;                                   //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedZones;                       //@synthesize fetchedZones=_fetchedZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableCorruptRecords;              //@synthesize mutableCorruptRecords=_mutableCorruptRecords - In the implementation block
@property (nonatomic,readonly) NSArray * corruptRecords; 
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)zoneIDs;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(BOOL)makeStateTransition;
-(NSArray *)corruptRecords;
-(void)_fetchZones;
-(void)_checkRecordPCSForAllZones;
-(NSMutableArray *)fetchedZones;
-(NSMutableArray *)mutableCorruptRecords;
-(void)setFetchedZones:(NSMutableArray *)arg1 ;
-(void)setMutableCorruptRecords:(NSMutableArray *)arg1 ;
@end

