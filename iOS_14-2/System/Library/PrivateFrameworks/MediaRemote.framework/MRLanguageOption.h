/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _MRLanguageOptionProtobuf, NSData, NSDictionary;

@interface MRLanguageOption : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasType;
	unsigned _type;
	NSString* _languageTag;
	NSArray* _characteristics;
	NSString* _displayName;
	NSString* _identifier;

}

@property (nonatomic,readonly) _MRLanguageOptionProtobuf * protobuf; 
@property (assign,nonatomic) unsigned type;                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasType;                                                //@synthesize hasType=_hasType - In the implementation block
@property (nonatomic,copy) NSString * languageTag;                                        //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,copy) NSArray * characteristics;                                     //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)automaticLanguageOptionWithType:(unsigned)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasType;
-(id)initWithType:(unsigned)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5 ;
-(NSString *)languageTag;
-(void)setType:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)data;
-(unsigned)type;
-(_MRLanguageOptionProtobuf *)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSString *)identifier;
-(BOOL)isAutomaticLanguageOptionWithType:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setLanguageTag:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

