/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(NSString *)stringValue;
-(id)initWithDictionary:(id)arg1;
-(void)setKey:(id)arg1;
-(void)setStringValue:(id)arg1;
-(int)valueType;
-(void)setUrlValue:(id)arg1;
-(_SFPBURL *)urlValue;
-(NSData *)jsonData;
-(void)setValueType:(int)arg1;
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int valueType;                         //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                  //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) _SFPBURL * urlValue;                   //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)key;
-(NSString *)stringValue;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)valueType;
-(void)setUrlValue:(_SFPBURL *)arg1 ;
-(_SFPBURL *)urlValue;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setValueType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

