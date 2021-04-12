/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class NBPhoneMetaData, NSString;

@interface NBMetadataHelper : NSObject {

	NBPhoneMetaData* _cachedMetaData;
	NSString* _cachedMetaDataKey;

}

@property (nonatomic,retain) NBPhoneMetaData * cachedMetaData;              //@synthesize cachedMetaData=_cachedMetaData - In the implementation block
@property (nonatomic,retain) NSString * cachedMetaDataKey;                  //@synthesize cachedMetaDataKey=_cachedMetaDataKey - In the implementation block
+(BOOL)hasValue:(id)arg1 ;
-(void)initializeHelper;
-(id)CCode2CNMap;
-(void)clearHelper;
-(id)getAllMetadata;
-(id)regionCodeFromCountryCode:(id)arg1 ;
-(id)countryCodeFromRegionCode:(id)arg1 ;
-(id)stringByTrimming:(id)arg1 ;
-(id)normalizeNonBreakingSpace:(id)arg1 ;
-(id)getMetadataForRegion:(id)arg1 ;
-(id)getMetadataForNonGeographicalRegion:(id)arg1 ;
-(NBPhoneMetaData *)cachedMetaData;
-(void)setCachedMetaData:(NBPhoneMetaData *)arg1 ;
-(NSString *)cachedMetaDataKey;
-(void)setCachedMetaDataKey:(NSString *)arg1 ;
@end

