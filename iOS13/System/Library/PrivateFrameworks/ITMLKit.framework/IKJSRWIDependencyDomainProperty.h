/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(IKJSRWIDependencyDomain *)domain;
-(NSString *)purpose;
-(NSString *)propertyType;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(BOOL)isRequired;
-(id)initWithPropertyDictionary:(id)arg1 forDomain:(id)arg2 ;
-(IKJSRWIDependencyDomainType *)domainType;
-(id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2 ;
-(id)propertyDefinitionString;
-(id)methodParameterString;
@end

