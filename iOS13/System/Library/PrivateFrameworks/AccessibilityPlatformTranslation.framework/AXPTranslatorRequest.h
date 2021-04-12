/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(unsigned long long)attributeType;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned long long)requestType;
-(AXPTranslationObject *)translation;
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)clientType;
-(void)setClientType:(unsigned long long)arg1 ;
@end

