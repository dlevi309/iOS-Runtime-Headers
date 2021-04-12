/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@class NSArray;

@interface WFAccountAccessResource : WFAccessResource {

	id _observer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,copy,readonly) NSArray * accounts; 
-(void)dealloc;
-(id)username;
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)accounts;
-(id)resourceName;
-(Class)accountClass;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)settingsUIDefinition;
-(BOOL)canLogOut;
-(void)logOut;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)makeAvailableAtGlobalLevelWithWebAuthenticationSession:(/*^block*/id)arg1 ;
@end

