/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource {

	ICScheme* _scheme;

}

@property (nonatomic,readonly) ICScheme * scheme;              //@synthesize scheme=_scheme - In the implementation block
+(BOOL)refreshesAvailabilityOnApplicationResume;
-(void)dealloc;
-(ICScheme *)scheme;
-(id)initWithDefinition:(id)arg1 ;
-(id)associatedAppIdentifier;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

