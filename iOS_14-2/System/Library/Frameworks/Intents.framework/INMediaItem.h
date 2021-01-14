/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INImage, NSDictionary, INPrivateMediaItemValueData;

@interface INMediaItem : NSObject <INKeyImageProducing, INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	long long _type;
	INImage* _artwork;
	NSString* _artist;
	NSDictionary* _topics;
	NSDictionary* _namedEntities;
	NSString* _assetInfo;
	INPrivateMediaItemValueData* _privateMediaItemValueData;

}

@property (readonly) INImage * _keyImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) INImage * artwork;                                                    //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * topics;                                       //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * namedEntities;                                //@synthesize namedEntities=_namedEntities - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetInfo;                                        //@synthesize assetInfo=_assetInfo - In the implementation block
@property (nonatomic,copy) INPrivateMediaItemValueData * privateMediaItemValueData;              //@synthesize privateMediaItemValueData=_privateMediaItemValueData - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * artist;                                           //@synthesize artist=_artist - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)artist;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 ;
-(void)setPrivateMediaItemValueData:(INPrivateMediaItemValueData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 assetInfo:(id)arg8 ;
-(INPrivateMediaItemValueData *)privateMediaItemValueData;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 privateMediaItemValueData:(id)arg8 ;
-(NSString *)assetInfo;
-(void)setArtwork:(INImage *)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSDictionary *)topics;
-(id)spokenPhrase;
-(NSString *)description;
-(INImage *)artwork;
-(long long)type;
-(INImage *)_keyImage;
-(unsigned long long)hash;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)namedEntities;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

