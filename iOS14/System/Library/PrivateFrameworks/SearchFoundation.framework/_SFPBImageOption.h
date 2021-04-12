/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBImageOption.h>
@class NSString, _SFPBStringDictionary, NSData;


@protocol _SFPBImageOption <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,retain) _SFPBStringDictionary * options; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setDefaultValue:(id)arg1;
-(NSString *)defaultValue;
-(NSData *)jsonData;
-(_SFPBStringDictionary *)options;
-(void)setOptions:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)name;
-(void)setName:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBStringDictionary, NSData;

@interface _SFPBImageOption : PBCodable <_SFPBImageOption, NSSecureCoding> {

	NSString* _name;
	NSString* _defaultValue;
	_SFPBStringDictionary* _options;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setDefaultValue:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)defaultValue;
-(NSData *)jsonData;
-(_SFPBStringDictionary *)options;
-(void)setOptions:(_SFPBStringDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

