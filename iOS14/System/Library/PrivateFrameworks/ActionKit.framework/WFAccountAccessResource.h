/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)accounts;
-(id)resourceName;
-(Class)accountClass;
-(id)username;
-(id)name;
-(void)logOut;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)settingsUIDefinition;
-(BOOL)canLogOut;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)makeAvailableAtGlobalLevelWithWebAuthenticationSessionInUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

