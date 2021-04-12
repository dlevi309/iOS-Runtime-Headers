/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INImage, NSDictionary;

@interface INMediaItem : NSObject <INKeyImageProducing, INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	long long _type;
	INImage* _artwork;
	NSString* _artist;
	NSDictionary* _topics;
	NSDictionary* _namedEntities;
	NSString* _assetInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy) INImage * artwork;                                  //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * topics;                     //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * namedEntities;              //@synthesize namedEntities=_namedEntities - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetInfo;                      //@synthesize assetInfo=_assetInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * artist;                         //@synthesize artist=_artist - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)artist;
-(INImage *)_keyImage;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)spokenPhrase;
-(id)_dictionaryRepresentation;
-(INImage *)artwork;
-(void)setArtwork:(INImage *)arg1 ;
-(NSDictionary *)topics;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 assetInfo:(id)arg8 ;
-(NSDictionary *)namedEntities;
-(NSString *)assetInfo;
@end

