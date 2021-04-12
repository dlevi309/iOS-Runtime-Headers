/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFPriorityDesignator : NSObject {

	unsigned long long _priority;

}

@property (assign,nonatomic) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
+(id)currentDesignator;
+(id)pushNewDesignator;
+(void)destroyCurrentDesignator;
+(id)currentDesignatorIfExists;
+(id)installNewDesignator;
+(id)currentDesignatorStackIfExists;
+(id)currentDesignatorStack;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
@end

