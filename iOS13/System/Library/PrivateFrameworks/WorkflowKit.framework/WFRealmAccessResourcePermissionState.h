/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>

@class NSString, NSData, RLMLinkingObjects;

@interface WFRealmAccessResourcePermissionState : RLMObject {

	NSString* _identifier;
	NSData* _data;
	RLMLinkingObjects* _trustedResources;

}

@property (copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (readonly) RLMLinkingObjects * trustedResources;              //@synthesize trustedResources=_trustedResources - In the implementation block
+(id)requiredProperties;
+(id)linkingObjectsProperties;
-(NSData *)data;
-(NSString *)identifier;
-(void)setData:(NSData *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(RLMLinkingObjects *)trustedResources;
@end

