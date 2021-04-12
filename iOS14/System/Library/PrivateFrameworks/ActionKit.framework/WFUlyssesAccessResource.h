/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource {

	ICScheme* _scheme;

}

@property (nonatomic,readonly) ICScheme * scheme;              //@synthesize scheme=_scheme - In the implementation block
+(BOOL)refreshesAvailabilityOnApplicationResume;
-(ICScheme *)scheme;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

