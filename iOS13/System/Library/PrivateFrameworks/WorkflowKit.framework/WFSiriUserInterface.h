/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSArray;


@protocol WFSiriUserInterface <WFUserInterface>
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs; 
@property (nonatomic,readonly) long long executionContext; 
@required
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(long long)executionContext;
-(void)showInteractionIfNeeded:(id)arg1 requiringConfirmation:(BOOL)arg2 requiringAuthentication:(BOOL)arg3 executionStage:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)configureIntent:(id)arg1;
-(NSArray *)airPlayRouteIDs;

@end

