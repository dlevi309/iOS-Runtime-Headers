/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(_SFPBStringDictionary *)options;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(void)setOptions:(id)arg1;
-(NSString *)defaultValue;
-(void)setDefaultValue:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBStringDictionary, NSData;

@interface _SFPBImageOption : PBCodable <_SFPBImageOption, NSSecureCoding> {

	NSString* _name;
	NSString* _defaultValue;
	_SFPBStringDictionary* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(_SFPBStringDictionary *)options;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(_SFPBStringDictionary *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

