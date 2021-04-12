/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFPriorityDesignator : NSObject {

	unsigned long long _priority;

}

@property (assign,nonatomic) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
+(id)currentDesignatorIfExists;
+(id)currentDesignator;
+(void)destroyCurrentDesignator;
+(id)currentDesignatorStack;
+(id)currentDesignatorStackIfExists;
+(id)pushNewDesignator;
+(id)installNewDesignator;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
@end

