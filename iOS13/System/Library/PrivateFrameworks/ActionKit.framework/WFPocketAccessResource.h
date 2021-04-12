/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)username;
-(id)resourceName;
-(id)associatedAppIdentifier;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canLogOut;
-(void)logOut;
-(id)loginHandler;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLoginHandler:(id)arg1 ;
-(PocketAPI *)pocket;
-(id)pocketCallbackScheme;
-(void)setPocket:(PocketAPI *)arg1 ;
@end

