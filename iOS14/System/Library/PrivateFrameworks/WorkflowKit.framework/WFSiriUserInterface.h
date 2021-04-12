/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSArray;


@protocol WFSiriUserInterface <WFUserInterfaceHost>
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs; 
@property (nonatomic,readonly) long long executionContext; 
@required
-(long long)executionContext;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)configureIntent:(id)arg1;
-(BOOL)isRunningInSiri;
-(NSArray *)airPlayRouteIDs;

@end

