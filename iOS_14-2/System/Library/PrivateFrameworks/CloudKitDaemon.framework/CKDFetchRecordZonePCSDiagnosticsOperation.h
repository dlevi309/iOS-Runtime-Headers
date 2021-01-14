/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString, NSDictionary, NSArray, CKPCSDiagnosticInformation;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation {

	NSString* _identityStatus;
	NSDictionary* _invalidPCSByZoneID;
	NSDictionary* _validPCSByZoneID;
	NSArray* _recordZoneIDs;
	CKPCSDiagnosticInformation* _pcsDiagnosticInfo;

}

@property (nonatomic,retain) NSString * identityStatus;                                   //@synthesize identityStatus=_identityStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidPCSByZoneID;                           //@synthesize invalidPCSByZoneID=_invalidPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSDictionary * validPCSByZoneID;                             //@synthesize validPCSByZoneID=_validPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDs;                                     //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) CKPCSDiagnosticInformation * pcsDiagnosticInfo;              //@synthesize pcsDiagnosticInfo=_pcsDiagnosticInfo - In the implementation block
-(NSArray *)recordZoneIDs;
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)main;
-(id)relevantZoneIDs;
-(CKPCSDiagnosticInformation *)pcsDiagnosticInfo;
-(NSString *)identityStatus;
-(void)setIdentityStatus:(NSString *)arg1 ;
-(NSDictionary *)invalidPCSByZoneID;
-(void)setInvalidPCSByZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)validPCSByZoneID;
-(void)setValidPCSByZoneID:(NSDictionary *)arg1 ;
-(void)setPcsDiagnosticInfo:(CKPCSDiagnosticInformation *)arg1 ;
@end

