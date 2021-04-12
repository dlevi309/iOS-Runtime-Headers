/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@class PocketAPI, NSString;

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate> {

	PocketAPI* _pocket;
	/*^block*/id _loginHandler;

}

@property (nonatomic,retain) PocketAPI * pocket;                    //@synthesize pocket=_pocket - In the implementation block
@property (nonatomic,copy) id loginHandler;                         //@synthesize loginHandler=_loginHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resourceName;
-(id)username;
-(void)logOut;
-(PocketAPI *)pocket;
-(unsigned long long)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshAvailabilityWithNotification:(BOOL)arg1 ;
-(BOOL)canLogOut;
-(id)loginHandler;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLoginHandler:(id)arg1 ;
-(id)pocketCallbackScheme;
-(void)setPocket:(PocketAPI *)arg1 ;
@end

