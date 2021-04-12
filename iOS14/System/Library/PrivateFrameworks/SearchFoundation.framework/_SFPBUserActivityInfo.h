/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBUserActivityInfo.h>
@class NSString, _SFPBURL, NSData;


@protocol _SFPBUserActivityInfo <NSObject>
@property (assign,nonatomic) int valueType; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,retain) _SFPBURL * urlValue; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)valueType;
-(_SFPBURL *)urlValue;
-(void)setUrlValue:(id)arg1;
-(NSData *)jsonData;
-(NSString *)stringValue;
-(id)initWithDictionary:(id)arg1;
-(void)setStringValue:(id)arg1;
-(NSString *)key;
-(void)setValueType:(int)arg1;
-(void)setKey:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBURL, NSData;

@interface _SFPBUserActivityInfo : PBCodable <_SFPBUserActivityInfo, NSSecureCoding> {

	int _valueType;
	NSString* _key;
	NSString* _stringValue;
	_SFPBURL* _urlValue;

}

@property (assign,nonatomic) int valueType;                         //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                  //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) _SFPBURL * urlValue;                   //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(int)valueType;
-(_SFPBURL *)urlValue;
-(id)initWithFacade:(id)arg1 ;
-(void)setUrlValue:(_SFPBURL *)arg1 ;
-(NSData *)jsonData;
-(NSString *)stringValue;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setValueType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

