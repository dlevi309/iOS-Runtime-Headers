/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFParameterState <NSCopying,WFVariableSerialization>
@optional
+(Class)processingValueClass;
-(id)initWithVariable:(id)arg1;

@required
-(BOOL)isEqual:(id)arg1;
-(unsigned long long)hash;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3;

@end

