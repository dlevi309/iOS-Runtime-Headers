/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString, IKJSRWIDependencyDomain, NSArray, NSDictionary;

@interface IKJSRWIDependencyDomainType : NSObject {

	NSString* _name;
	NSString* _identifier;
	NSString* _domainType;
	NSString* _purpose;
	IKJSRWIDependencyDomain* _domain;
	NSArray* _initializationParameters;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domainType;                                //@synthesize domainType=_domainType - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                   //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomain * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSArray * initializationParameters;                   //@synthesize initializationParameters=_initializationParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
-(NSDictionary *)properties;
-(NSString *)purpose;
-(IKJSRWIDependencyDomain *)domain;
-(NSString *)name;
-(NSString *)identifier;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSString *)domainType;
-(NSArray *)initializationParameters;
-(id)initializationSelectorString;
-(BOOL)isInitializerValid;
-(id)invalidProperties;
-(id)initializationString;
-(id)initWithTypeDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)typeInterfaceString;
-(id)typeImplementationStringWithSoftLinking:(BOOL)arg1 ;
@end

