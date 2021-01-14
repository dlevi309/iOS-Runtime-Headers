/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class NSCache;

@interface NBMetadataHelper : NSObject {

	NSCache* _metadataCache;

}

@property (nonatomic,retain) NSCache * metadataCache;              //@synthesize metadataCache=_metadataCache - In the implementation block
+(id)jsonObjectFromZippedDataWithBytes:(char*)arg1 compressedLength:(unsigned long long)arg2 expandedLength:(unsigned long long)arg3 ;
+(id)CN2CCodeMap;
+(id)phoneNumberDataMap;
+(id)CCode2CNMap;
+(id)regionCodeFromCountryCode:(id)arg1 ;
+(id)countryCodeFromRegionCode:(id)arg1 ;
+(BOOL)hasValue:(id)arg1 ;
-(id)init;
-(NSCache *)metadataCache;
-(void)setMetadataCache:(NSCache *)arg1 ;
-(id)getMetadataForRegion:(id)arg1 ;
-(id)getAllMetadata;
-(id)getMetadataForNonGeographicalRegion:(id)arg1 ;
@end

