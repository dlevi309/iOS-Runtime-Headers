/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>

@class NSString;

@interface WFWorkflowType : RLMObject {

	NSString* _type;

}

@property (copy) NSString * type;              //@synthesize type=_type - In the implementation block
+(id)primaryKey;
+(id)requiredProperties;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
@end

