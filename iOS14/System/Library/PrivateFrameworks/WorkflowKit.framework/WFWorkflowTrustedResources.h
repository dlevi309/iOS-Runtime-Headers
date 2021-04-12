/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol WFTrustedJavaScriptDomain, WFRealmAccessResourcePermissionState;
@class RLMArray, RLMLinkingObjects;

@interface WFWorkflowTrustedResources : RLMObject <NSCopying> {

	RLMArray*<WFTrustedJavaScriptDomain> _trustedDomains;
	RLMArray*<WFRealmAccessResourcePermissionState> _accessResourcePermissionStates;
	RLMLinkingObjects* _workflows;

}

@property (retain) RLMArray*<WFTrustedJavaScriptDomain> trustedDomains;                                         //@synthesize trustedDomains=_trustedDomains - In the implementation block
@property (retain) RLMArray*<WFRealmAccessResourcePermissionState> accessResourcePermissionStates;              //@synthesize accessResourcePermissionStates=_accessResourcePermissionStates - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;                                                             //@synthesize workflows=_workflows - In the implementation block
+(id)requiredProperties;
+(id)linkingObjectsProperties;
-(RLMArray*<WFTrustedJavaScriptDomain>)trustedDomains;
-(RLMLinkingObjects *)workflows;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrustedDomains:(RLMArray*<WFTrustedJavaScriptDomain>)arg1 ;
-(RLMArray*<WFRealmAccessResourcePermissionState>)accessResourcePermissionStates;
-(void)setAccessResourcePermissionStates:(RLMArray*<WFRealmAccessResourcePermissionState>)arg1 ;
@end

