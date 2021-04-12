/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, CKRecordZone, NSMutableDictionary;

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation {

	BOOL _isHandlingPCSOplockFailure;
	NSArray* _sourceZoneIDs;
	CKRecordZone* _targetZone;
	NSMutableDictionary* _zonePCSDataByZoneID;
	long long _numZoneSaveAttempts;
	long long _maxZoneSaveAttempts;

}

@property (nonatomic,retain) NSArray * sourceZoneIDs;                                //@synthesize sourceZoneIDs=_sourceZoneIDs - In the implementation block
@property (nonatomic,retain) CKRecordZone * targetZone;                              //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zonePCSDataByZoneID;              //@synthesize zonePCSDataByZoneID=_zonePCSDataByZoneID - In the implementation block
@property (assign) BOOL isHandlingPCSOplockFailure;                                  //@synthesize isHandlingPCSOplockFailure=_isHandlingPCSOplockFailure - In the implementation block
@property (assign,nonatomic) long long numZoneSaveAttempts;                          //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                          //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
-(void)main;
-(id)activityCreate;
-(long long)maxZoneSaveAttempts;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(NSArray *)sourceZoneIDs;
-(void)setSourceZoneIDs:(NSArray *)arg1 ;
-(CKRecordZone *)targetZone;
-(void)setTargetZone:(CKRecordZone *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(long long)numZoneSaveAttempts;
-(void)setNumZoneSaveAttempts:(long long)arg1 ;
-(void)_fetchZonePCS;
-(void)_prepareTargetZonePCS;
-(BOOL)_saveTargetZone;
-(BOOL)isHandlingPCSOplockFailure;
-(void)_setPermanentOplockFailure;
-(void)_fetchPCSDataForZoneID:(id)arg1 ;
-(NSMutableDictionary *)zonePCSDataByZoneID;
-(void)_handleZoneSavedWithID:(id)arg1 responseCode:(id)arg2 ;
-(void)setIsHandlingPCSOplockFailure:(BOOL)arg1 ;
-(void)setZonePCSDataByZoneID:(NSMutableDictionary *)arg1 ;
@end

