/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAppConfigurationResource, NTPBAsset, NTPBAudioPlaylistItem, NTPBAVAsset, NTPBAVAssetKey, NTPBCacheCoordinatorHints, NSData, NTPBDate, NTPBIssueReadingHistoryItem, NSString, NTPBNetworkSessionList, NTPBPersonalizationLocalData, NTPBPrivateDataControllerSyncState, NTPBReadingHistoryItem;

@interface NTPBKeyValuePair : PBCodable <NSCopying> {

	NTPBAppConfigurationResource* _appConfigurationResource;
	NTPBAsset* _asset;
	NTPBAudioPlaylistItem* _audioPlaylistItem;
	NTPBAVAsset* _avAsset;
	NTPBAVAssetKey* _avAssetKey;
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
	SCD_Struct_NT3 _has;

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
@property (nonatomic,readonly) BOOL hasAudioPlaylistItem; 
@property (nonatomic,retain) NTPBAudioPlaylistItem * audioPlaylistItem;                                        //@synthesize audioPlaylistItem=_audioPlaylistItem - In the implementation block
@property (nonatomic,readonly) BOOL hasAvAsset; 
@property (nonatomic,retain) NTPBAVAsset * avAsset;                                                            //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,readonly) BOOL hasAvAssetKey; 
@property (nonatomic,retain) NTPBAVAssetKey * avAssetKey;                                                      //@synthesize avAssetKey=_avAssetKey - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(int)valueType;
-(NTPBDate *)dateValue;
-(void)setAsset:(NTPBAsset *)arg1 ;
-(BOOL)hasCacheCoordinatorHintsValue;
-(NSData *)dataValue;
-(void)setNetworkSessionList:(NTPBNetworkSessionList *)arg1 ;
-(void)setAvAssetKey:(NTPBAVAssetKey *)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
-(void)setPersonalizationLocalData:(NTPBPersonalizationLocalData *)arg1 ;
-(BOOL)hasStringValue;
-(NTPBReadingHistoryItem *)readingHistoryItem;
-(void)setHasValueType:(BOOL)arg1 ;
-(NTPBAsset *)asset;
-(BOOL)hasDataValue;
-(BOOL)hasAvAsset;
-(void)setCacheCoordinatorHintsValue:(NTPBCacheCoordinatorHints *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(BOOL)hasPrivateDataControllerSyncState;
-(NTPBCacheCoordinatorHints *)cacheCoordinatorHintsValue;
-(BOOL)hasAppConfigurationResource;
-(NTPBAVAssetKey *)avAssetKey;
-(BOOL)hasPersonalizationLocalData;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(NTPBPrivateDataControllerSyncState *)privateDataControllerSyncState;
-(NTPBPersonalizationLocalData *)personalizationLocalData;
-(void)setReadingHistoryItem:(NTPBReadingHistoryItem *)arg1 ;
-(NSString *)key;
-(void)setAvAsset:(NTPBAVAsset *)arg1 ;
-(BOOL)hasIssueReadingHistoryItem;
-(void)setAppConfigurationResource:(NTPBAppConfigurationResource *)arg1 ;
-(void)setDateValue:(NTPBDate *)arg1 ;
-(BOOL)hasNetworkSessionList;
-(unsigned long long)hash;
-(NTPBAudioPlaylistItem *)audioPlaylistItem;
-(void)setAudioPlaylistItem:(NTPBAudioPlaylistItem *)arg1 ;
-(BOOL)hasReadingHistoryItem;
-(BOOL)hasAsset;
-(BOOL)hasValueType;
-(void)setValueType:(int)arg1 ;
-(void)setRecordData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NTPBNetworkSessionList *)networkSessionList;
-(NTPBAVAsset *)avAsset;
-(NTPBAppConfigurationResource *)appConfigurationResource;
-(void)writeTo:(id)arg1 ;
-(NSData *)recordData;
-(void)setPrivateDataControllerSyncState:(NTPBPrivateDataControllerSyncState *)arg1 ;
-(NTPBIssueReadingHistoryItem *)issueReadingHistoryItem;
-(BOOL)hasAudioPlaylistItem;
-(void)setIssueReadingHistoryItem:(NTPBIssueReadingHistoryItem *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAvAssetKey;
-(void)dealloc;
-(BOOL)hasRecordData;
-(BOOL)hasDateValue;
@end

