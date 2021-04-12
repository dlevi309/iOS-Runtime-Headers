/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end

