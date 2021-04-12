/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsUpdateGrantedDelegatePermissionResponseConsumer.h>

@class DAEGrantedDelegate, NSString;

@interface DADClientUpdateGrantedDelegatePermissionResponseDelegate : DADClientDelegate <DAEventsUpdateGrantedDelegatePermissionResponseConsumer> {

	id _requestID;
	DAEGrantedDelegate* _grantedDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(void)updateGrantedDelegatePermissionFinishedWithError:(id)arg1 ;
-(void)performRequest;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 grantedDelegate:(id)arg3 ;
@end

