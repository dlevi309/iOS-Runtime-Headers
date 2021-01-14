/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString, NSArray, IKJSRWIDependencyDomainType, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainProperty : NSObject {

	NSString* _reference;
	NSArray* _enumOptions;
	BOOL _required;
	NSString* _name;
	NSString* _purpose;
	NSString* _propertyType;
	IKJSRWIDependencyDomainType* _domainType;
	IKJSRWIDependencyDomain* _domain;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                           //@synthesize purpose=_purpose - In the implementation block
@property (getter=isRequired,nonatomic,readonly) BOOL required;                              //@synthesize required=_required - In the implementation block
@property (nonatomic,readonly) NSString * propertyType;                                      //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomainType * domainType;              //@synthesize domainType=_domainType - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomain * domain;                      //@synthesize domain=_domain - In the implementation block
+(id)propertyNameMapping;
+(id)typeMapping;
-(NSString *)purpose;
-(BOOL)isRequired;
-(IKJSRWIDependencyDomain *)domain;
-(NSString *)name;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(NSString *)propertyType;
-(IKJSRWIDependencyDomainType *)domainType;
-(id)initWithPropertyDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2 ;
-(id)propertyDefinitionString;
-(id)methodParameterString;
@end

