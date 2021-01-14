/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
-(unsigned long long)policy;
-(NSString *)errorMessage;
-(NSString *)errorTitle;
@end

