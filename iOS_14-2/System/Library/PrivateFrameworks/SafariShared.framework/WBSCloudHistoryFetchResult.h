/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableArray, NSMutableDictionary, NSData, NSArray, NSDictionary;

@interface WBSCloudHistoryFetchResult : NSObject {

	NSMutableArray* _mutableCloudHistoryVisits;
	NSMutableArray* _mutableHistoryTombstones;
	NSMutableDictionary* _mutableClientVersions;
	NSData* _serverChangeTokenData;

}

@property (nonatomic,readonly) NSArray * cloudHistoryVisits; 
@property (nonatomic,readonly) NSArray * historyTombstones; 
@property (nonatomic,readonly) NSDictionary * clientVersions; 
@property (nonatomic,readonly) NSData * serverChangeTokenData;              //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
-(id)init;
-(void)_addCloudHistoryVisit:(id)arg1 ;
-(NSDictionary *)clientVersions;
-(void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2 ;
-(void)_addHistoryTombstone:(id)arg1 ;
-(void)_setServerChangeTokenData:(id)arg1 ;
-(id)description;
-(NSArray *)cloudHistoryVisits;
-(NSArray *)historyTombstones;
-(NSData *)serverChangeTokenData;
@end

