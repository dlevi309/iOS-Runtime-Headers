/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsGrantedDelegatesListResponseConsumer.h>

@class NSArray, NSString;

@interface DADClientGrantedDelegatesListResponseDelegate : DADClientDelegate <DAEventsGrantedDelegatesListResponseConsumer> {

	id _requestID;
	NSArray* _results;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(void)grantedDelegatesListRequestFinishedWithResults:(id)arg1 error:(id)arg2 ;
-(void)performRequest;
@end

