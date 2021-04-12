/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(RLMArray*<WFTrustedJavaScriptDomain>)trustedDomains;
-(RLMArray*<WFRealmAccessResourcePermissionState>)accessResourcePermissionStates;
-(RLMLinkingObjects *)workflows;
-(void)setTrustedDomains:(RLMArray*<WFTrustedJavaScriptDomain>)arg1 ;
-(void)setAccessResourcePermissionStates:(RLMArray*<WFRealmAccessResourcePermissionState>)arg1 ;
@end

