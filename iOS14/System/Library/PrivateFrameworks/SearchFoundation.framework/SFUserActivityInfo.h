/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFUserActivityInfo.h>
@class NSString, NSURL, NSDictionary, NSData;


@protocol SFUserActivityInfo <NSObject>
@property (assign,nonatomic) int valueType; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSURL * urlValue; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(int)valueType;
-(NSURL *)urlValue;
-(void)setUrlValue:(id)arg1;
-(NSData *)jsonData;
-(NSString *)stringValue;
-(void)setStringValue:(id)arg1;
-(NSString *)key;
-(void)setValueType:(int)arg1;
-(void)setKey:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary, NSData;

@interface SFUserActivityInfo : NSObject <SFUserActivityInfo, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _valueType;
	NSString* _key;
	NSString* _stringValue;
	NSURL* _urlValue;

}

@property (assign,nonatomic) int valueType;                                          //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy) NSURL * urlValue;                                         //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(int)valueType;
-(NSURL *)urlValue;
-(void)setUrlValue:(NSURL *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValueType;
-(void)setValueType:(int)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

