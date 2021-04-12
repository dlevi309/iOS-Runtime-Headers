/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFParameterState <NSCopying,WFVariableSerialization>
@optional
+(Class)processingValueClass;
+(id)processingValueClasses;
-(id)initWithVariable:(id)arg1;
-(id)legacySerializedRepresentation;

@required
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3;

@end

