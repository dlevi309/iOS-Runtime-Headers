/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NUAdContextDefinition;

@interface NUAdContextConstructor : NSObject {

	NUAdContextDefinition* _rootDefinition;
	NUAdContextDefinition* _headerDefinition;
	NUAdContextDefinition* _bodyDefinition;

}

@property (nonatomic,readonly) NUAdContextDefinition * rootDefinition;                //@synthesize rootDefinition=_rootDefinition - In the implementation block
@property (nonatomic,readonly) NUAdContextDefinition * headerDefinition;              //@synthesize headerDefinition=_headerDefinition - In the implementation block
@property (nonatomic,readonly) NUAdContextDefinition * bodyDefinition;                //@synthesize bodyDefinition=_bodyDefinition - In the implementation block
-(id)initWithRootDefinition:(id)arg1 headerDefinition:(id)arg2 bodyDefinition:(id)arg3 ;
-(id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 ;
-(NUAdContextDefinition *)rootDefinition;
-(id)valueForPropertyDefinition:(id)arg1 fromContextProviders:(id)arg2 keyedContextProviders:(id)arg3 ;
-(id)contextEntryForKey:(id)arg1 andValue:(id)arg2 ;
-(id)newsContextForContextProviders:(id)arg1 andKeyedContextProviders:(id)arg2 ;
-(NUAdContextDefinition *)headerDefinition;
-(void)dictionary:(id)arg1 addValue:(id)arg2 forKeyPath:(id)arg3 ;
-(NUAdContextDefinition *)bodyDefinition;
@end

