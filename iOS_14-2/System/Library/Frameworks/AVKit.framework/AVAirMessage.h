/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class NSString, NSValue, NSData, NSArray, NSDictionary;

@interface AVAirMessage : NSObject {

	unsigned _type;
	NSString* _itemIdentifier;
	NSString* _MIMEType;
	NSString* _extendedLanguageTag;
	NSValue* _value;
	NSData* _rawData;
	NSArray* _array;
	NSDictionary* _dictionary;
	NSDictionary* _initialRepresentation;

}

@property (nonatomic,copy) NSString * itemIdentifier;                                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,copy) NSString * extendedLanguageTag;                           //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (nonatomic,retain) NSValue * value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSData * rawData;                                       //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) NSArray * array;                                        //@synthesize array=_array - In the implementation block
@property (nonatomic,retain) NSDictionary * dictionary;                              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * initialRepresentation;                 //@synthesize initialRepresentation=_initialRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * jsonDataRepresentation; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)buildVersion;
+(id)_nameForDataCompressionAlgorithm:(long long)arg1 ;
+(id)commonDictionaryRepresentationKeys;
+(BOOL)isAirMessagingEnabled;
+(id)dictionaryRepresentationCommon;
+(id)currentOSIdentifier;
+(id)currentAppIdentifier;
+(id)_decompressBodyData:(id)arg1 forCompressionAlgorithm:(id)arg2 ;
+(id)messageWithRequiresLinearPlayback:(BOOL)arg1 itemIdentifier:(id)arg2 ;
+(id)messageWithUserScrubToAssetTime:(double)arg1 itemIdentifier:(id)arg2 ;
+(id)messageWithParts:(id)arg1 ;
+(id)messageWithExternalMetadata:(id)arg1 itemIdentifier:(id)arg2 ;
+(id)messageWithPosterArtworkMetadata:(id)arg1 itemIdentifier:(id)arg2 ;
-(NSString *)MIMEType;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)itemIdentifier;
-(id)number;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(NSData *)rawData;
-(NSArray *)array;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setValue:(NSValue *)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
-(id)description;
-(NSString *)extendedLanguageTag;
-(NSDictionary *)dictionary;
-(unsigned)type;
-(void)setMIMEType:(NSString *)arg1 ;
-(id)initWithMessageType:(unsigned)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithMessageType:(unsigned)arg1 itemIdentifier:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(id)allRecognizedKeysForDictionaryRepresentation;
-(NSData *)jsonDataRepresentation;
-(id)headerTextRepresenationForBodyDataLength:(unsigned long long)arg1 extraHeaders:(id)arg2 ;
-(BOOL)shouldUseJSONForBody;
-(id)messageDataRepresentation;
-(NSDictionary *)initialRepresentation;
-(void)setArray:(NSArray *)arg1 ;
-(NSValue *)value;
@end

