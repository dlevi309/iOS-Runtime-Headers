/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAppConfigurationResource, NTPBAsset, NTPBCacheCoordinatorHints, NSData, NTPBDate, NTPBIssueReadingHistoryItem, NSString, NTPBNetworkSessionList, NTPBPersonalizationLocalData, NTPBPrivateDataControllerSyncState, NTPBReadingHistoryItem;

@interface NTPBKeyValuePair : PBCodable <NSCopying> {

	NTPBAppConfigurationResource* _appConfigurationResource;
	NTPBAsset* _asset;
	NTPBCacheCoordinatorHints* _cacheCoordinatorHintsValue;
	NSData* _dataValue;
	NTPBDate* _dateValue;
	NTPBIssueReadingHistoryItem* _issueReadingHistoryItem;
	NSString* _key;
	NTPBNetworkSessionList* _networkSessionList;
	NTPBPersonalizationLocalData* _personalizationLocalData;
	NTPBPrivateDataControllerSyncState* _privateDataControllerSyncState;
	NTPBReadingHistoryItem* _readingHistoryItem;
	NSData* _recordData;
	NSString* _stringValue;
	int _valueType;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                                                   //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValueType; 
@property (assign,nonatomic) int valueType;                                                                    //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) BOOL hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                                                               //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                                           //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) NTPBDate * dateValue;                                                             //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheCoordinatorHintsValue; 
@property (nonatomic,retain) NTPBCacheCoordinatorHints * cacheCoordinatorHintsValue;                           //@synthesize cacheCoordinatorHintsValue=_cacheCoordinatorHintsValue - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordData; 
@property (nonatomic,retain) NSData * recordData;                                                              //@synthesize recordData=_recordData - In the implementation block
@property (nonatomic,readonly) BOOL hasReadingHistoryItem; 
@property (nonatomic,retain) NTPBReadingHistoryItem * readingHistoryItem;                                      //@synthesize readingHistoryItem=_readingHistoryItem - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkSessionList; 
@property (nonatomic,retain) NTPBNetworkSessionList * networkSessionList;                                      //@synthesize networkSessionList=_networkSessionList - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationLocalData; 
@property (nonatomic,retain) NTPBPersonalizationLocalData * personalizationLocalData;                          //@synthesize personalizationLocalData=_personalizationLocalData - In the implementation block
@property (nonatomic,readonly) BOOL hasAppConfigurationResource; 
@property (nonatomic,retain) NTPBAppConfigurationResource * appConfigurationResource;                          //@synthesize appConfigurationResource=_appConfigurationResource - In the implementation block
@property (nonatomic,readonly) BOOL hasPrivateDataControllerSyncState; 
@property (nonatomic,retain) NTPBPrivateDataControllerSyncState * privateDataControllerSyncState;              //@synthesize privateDataControllerSyncState=_privateDataControllerSyncState - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueReadingHistoryItem; 
@property (nonatomic,retain) NTPBIssueReadingHistoryItem * issueReadingHistoryItem;                            //@synthesize issueReadingHistoryItem=_issueReadingHistoryItem - In the implementation block
@property (nonatomic,readonly) BOOL hasAsset; 
@property (nonatomic,retain) NTPBAsset * asset;                                                                //@synthesize asset=_asset - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDateValue:(NTPBDate *)arg1 ;
-(BOOL)hasDateValue;
-(NTPBDate *)dateValue;
-(int)valueType;
-(NTPBAsset *)asset;
-(void)setAsset:(NTPBAsset *)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
-(BOOL)hasDataValue;
-(NSData *)dataValue;
-(BOOL)hasKey;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasValueType;
-(void)setHasValueType:(BOOL)arg1 ;
-(BOOL)hasAsset;
-(NTPBReadingHistoryItem *)readingHistoryItem;
-(void)setReadingHistoryItem:(NTPBReadingHistoryItem *)arg1 ;
-(NTPBNetworkSessionList *)networkSessionList;
-(void)setNetworkSessionList:(NTPBNetworkSessionList *)arg1 ;
-(NTPBPrivateDataControllerSyncState *)privateDataControllerSyncState;
-(void)setPrivateDataControllerSyncState:(NTPBPrivateDataControllerSyncState *)arg1 ;
-(NTPBCacheCoordinatorHints *)cacheCoordinatorHintsValue;
-(void)setCacheCoordinatorHintsValue:(NTPBCacheCoordinatorHints *)arg1 ;
-(void)setRecordData:(NSData *)arg1 ;
-(NSData *)recordData;
-(NTPBIssueReadingHistoryItem *)issueReadingHistoryItem;
-(void)setIssueReadingHistoryItem:(NTPBIssueReadingHistoryItem *)arg1 ;
-(NTPBPersonalizationLocalData *)personalizationLocalData;
-(void)setPersonalizationLocalData:(NTPBPersonalizationLocalData *)arg1 ;
-(void)setAppConfigurationResource:(NTPBAppConfigurationResource *)arg1 ;
-(BOOL)hasCacheCoordinatorHintsValue;
-(BOOL)hasRecordData;
-(BOOL)hasReadingHistoryItem;
-(BOOL)hasNetworkSessionList;
-(BOOL)hasPersonalizationLocalData;
-(BOOL)hasAppConfigurationResource;
-(BOOL)hasPrivateDataControllerSyncState;
-(BOOL)hasIssueReadingHistoryItem;
-(NTPBAppConfigurationResource *)appConfigurationResource;
@end

