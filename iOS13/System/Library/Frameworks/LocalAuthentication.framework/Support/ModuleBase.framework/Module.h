/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/


@class MechanismManager;

@interface Module : NSObject {

	MechanismManager* _mechanismManager;

}

@property (nonatomic,readonly) MechanismManager * mechanismManager;              //@synthesize mechanismManager=_mechanismManager - In the implementation block
+(id)missingSubclassErrorWithIdentifier:(id)arg1 ;
-(id)initWithMechanismManager:(id)arg1 ;
-(void)contextPluginWithExternalizedContext:(id)arg1 processId:(int)arg2 invalidationBlock:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(MechanismManager *)mechanismManager;
@end

