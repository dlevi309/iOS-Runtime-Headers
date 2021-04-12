/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/


@class MechanismManager;

@interface Module : NSObject {

	MechanismManager* _mechanismManager;
	long long _type;

}

@property (nonatomic,readonly) MechanismManager * mechanismManager;              //@synthesize mechanismManager=_mechanismManager - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
+(id)missingSubclassErrorWithIdentifier:(id)arg1 ;
-(id)initWithMechanismManager:(id)arg1 type:(long long)arg2 ;
-(MechanismManager *)mechanismManager;
-(long long)type;
-(void)trackPlugin:(id)arg1 processId:(int)arg2 proxy:(id)arg3 context:(id)arg4 invalidationBlock:(/*^block*/id)arg5 ;
-(void)contextPluginWithExternalizedContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)untrackPlugin:(id)arg1 ;
@end

