/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSMutableDictionary, NSString, NSMutableSet, NSDictionary, NSSet;

@interface BRCSyncHealthReport : NSObject {

	NSMutableDictionary* _syncUpErrorsByZone;
	NSMutableDictionary* _syncDownErrorsByZone;
	NSString* _dsid;
	NSString* _rampNumber;
	NSMutableSet* _uploadFailures;
	NSMutableSet* _downloadFailures;
	unsigned long long _totalZoneCount;
	unsigned long long _blockedZonesCount;
	unsigned long long _totalItemsCount;

}

@property (nonatomic,readonly) unsigned long long totalZoneCount;                 //@synthesize totalZoneCount=_totalZoneCount - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedZonesCount;              //@synthesize blockedZonesCount=_blockedZonesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalItemsCount;                //@synthesize totalItemsCount=_totalItemsCount - In the implementation block
@property (nonatomic,readonly) NSDictionary * syncUpErrorsByZone;                 //@synthesize syncUpErrorsByZone=_syncUpErrorsByZone - In the implementation block
@property (nonatomic,readonly) NSDictionary * syncDownErrorsByZone;               //@synthesize syncDownErrorsByZone=_syncDownErrorsByZone - In the implementation block
@property (nonatomic,readonly) NSSet * uploadFailures;                            //@synthesize uploadFailures=_uploadFailures - In the implementation block
@property (nonatomic,readonly) NSSet * downloadFailures;                          //@synthesize downloadFailures=_downloadFailures - In the implementation block
@property (nonatomic,readonly) NSString * dsid;                                   //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) NSString * rampNumber;                             //@synthesize rampNumber=_rampNumber - In the implementation block
-(id)init;
-(NSString *)dsid;
-(unsigned long long)totalItemsCount;
-(void)generateReportWithSession:(id)arg1 ;
-(void)syncErrors:(/*^block*/id)arg1 ;
-(NSString *)rampNumber;
-(void)_fillTransferFailure:(id)arg1 withRowID:(unsigned long long)arg2 atDate:(id)arg3 session:(id)arg4 ;
-(id)getRampNumberForDSID:(id)arg1 ;
-(unsigned long long)totalZoneCount;
-(unsigned long long)blockedZonesCount;
-(NSDictionary *)syncUpErrorsByZone;
-(NSDictionary *)syncDownErrorsByZone;
-(NSSet *)uploadFailures;
-(NSSet *)downloadFailures;
@end

