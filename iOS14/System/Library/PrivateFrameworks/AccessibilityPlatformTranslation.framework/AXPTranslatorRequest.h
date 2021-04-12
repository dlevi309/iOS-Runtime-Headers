/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXPTranslationObject, NSDictionary;

@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding> {

	AXPTranslationObject* _translation;
	unsigned long long _requestType;
	unsigned long long _attributeType;
	unsigned long long _actionType;
	NSDictionary* _parameters;
	unsigned long long _clientType;

}

@property (nonatomic,retain) AXPTranslationObject * translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                  //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                //@synthesize attributeType=_attributeType - In the implementation block
@property (assign,nonatomic) unsigned long long actionType;                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                       //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned long long clientType;                   //@synthesize clientType=_clientType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithTranslation:(id)arg1 ;
+(id)allowedDecodableClasses;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)attributeType;
-(unsigned long long)requestType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
-(id)description;
-(AXPTranslationObject *)translation;
-(void)setClientType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)clientType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

