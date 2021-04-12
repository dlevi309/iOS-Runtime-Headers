/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(IKJSRWIDependencyDomain *)domain;
-(NSArray *)params;
-(NSString *)purpose;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)selectorString;
-(id)_eventInterfaceStringForImplementation:(BOOL)arg1 ;
-(id)initWithEventDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)eventInterfaceString;
-(id)eventImplementationStringWithSoftLinking:(BOOL)arg1 ;
@end

