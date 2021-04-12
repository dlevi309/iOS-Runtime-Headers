/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic,readonly) NSString * propertyName; 
@property (nonatomic,readonly) id<WFPropertyListObject> propertyUserInfo; 
@property (nonatomic,readonly) BOOL negativeProperty; 
@property (nonatomic,readonly) NSString * negativePropertyName; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 ;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 negativeProperty:(BOOL)arg3 negativePropertyName:(id)arg4 ;
-(id<WFPropertyListObject>)propertyUserInfo;
-(BOOL)negativeProperty;
-(NSString *)negativePropertyName;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

