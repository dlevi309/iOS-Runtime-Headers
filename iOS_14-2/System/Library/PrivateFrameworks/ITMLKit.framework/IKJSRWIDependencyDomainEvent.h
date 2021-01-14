/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString, IKJSRWIDependencyDomain, NSArray;

@interface IKJSRWIDependencyDomainEvent : NSObject {

	NSString* _name;
	NSString* _purpose;
	IKJSRWIDependencyDomain* _domain;
	NSArray* _params;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                   //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomain * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSArray * params;                                     //@synthesize params=_params - In the implementation block
-(NSString *)purpose;
-(IKJSRWIDependencyDomain *)domain;
-(NSString *)name;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSArray *)params;
-(id)selectorString;
-(id)_eventInterfaceStringForImplementation:(BOOL)arg1 ;
-(id)initWithEventDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)eventInterfaceString;
-(id)eventImplementationStringWithSoftLinking:(BOOL)arg1 ;
@end

