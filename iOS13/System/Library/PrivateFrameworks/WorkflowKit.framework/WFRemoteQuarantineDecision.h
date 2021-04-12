/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFRemoteQuarantineDecision : MTLModel <MTLJSONSerializing> {

	unsigned long long _policy;
	NSString* _errorTitle;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) unsigned long long policy;                        //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSString * errorTitle;                            //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                          //@synthesize errorMessage=_errorMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
-(unsigned long long)policy;
-(NSString *)errorMessage;
-(NSString *)errorTitle;
@end

