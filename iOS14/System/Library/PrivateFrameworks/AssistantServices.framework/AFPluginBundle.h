/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSMutableDictionary;

@interface AFPluginBundle : NSObject {

	Class _factoryClass;
	id _factoryInstance;
	NSMutableDictionary* _classIdentifiers;

}

@property (nonatomic,retain) Class factoryClass;                                  //@synthesize factoryClass=_factoryClass - In the implementation block
@property (nonatomic,retain) id factoryInstance;                                  //@synthesize factoryInstance=_factoryInstance - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * classIdentifiers;              //@synthesize classIdentifiers=_classIdentifiers - In the implementation block
-(id)init;
-(NSMutableDictionary *)classIdentifiers;
-(void)registerClassIdentifier:(id)arg1 forDomain:(id)arg2 inGroup:(id)arg3 ;
-(Class)factoryClass;
-(void)setFactoryClass:(Class)arg1 ;
-(id)factoryInstance;
-(BOOL)supportsClassIdentifier:(id)arg1 forDomainKey:(id)arg2 groupIdentifier:(id)arg3 ;
-(void)setFactoryInstance:(id)arg1 ;
-(void)setClassIdentifiers:(NSMutableDictionary *)arg1 ;
@end

