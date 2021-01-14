/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(RLMLinkingObjects *)trustedResources;
@end

