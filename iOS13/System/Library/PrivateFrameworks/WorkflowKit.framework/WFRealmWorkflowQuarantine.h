/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>

@class NSString, NSDate, RLMLinkingObjects;

@interface WFRealmWorkflowQuarantine : RLMObject {

	NSString* _sourceAppIdentifier;
	NSDate* _importDate;
	RLMLinkingObjects* _workflows;

}

@property (copy) NSString * sourceAppIdentifier;                 //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (retain) NSDate * importDate;                          //@synthesize importDate=_importDate - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;              //@synthesize workflows=_workflows - In the implementation block
+(id)className;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
-(NSString *)sourceAppIdentifier;
-(void)setImportDate:(NSDate *)arg1 ;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(NSDate *)importDate;
-(RLMLinkingObjects *)workflows;
@end

