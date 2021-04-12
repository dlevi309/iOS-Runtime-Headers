/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@protocol OS_dispatch_group;
@class NSObject, NSError, NSString;

@interface WFPocketAddAction : WFAction <PocketAPIDelegate> {

	NSObject*<OS_dispatch_group> _addGroup;
	NSError* _lastError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> addGroup;              //@synthesize addGroup=_addGroup - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                //@synthesize lastError=_lastError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastError:(NSError *)arg1 ;
-(NSError *)lastError;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4 ;
-(NSObject*<OS_dispatch_group>)addGroup;
-(void)setAddGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

