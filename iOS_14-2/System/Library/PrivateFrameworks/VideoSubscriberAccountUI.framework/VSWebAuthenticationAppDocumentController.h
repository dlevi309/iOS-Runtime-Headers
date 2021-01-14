/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>
#import <libobjc.A.dylib/VSMessagePortFeatureDelegate.h>
#import <libobjc.A.dylib/VSMessageQueueDelegate.h>

@class NSString;

@interface VSWebAuthenticationAppDocumentController : VSAppDocumentController <VSMessagePortFeatureDelegate, VSMessageQueueDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendMessage:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(id)initWithAppDocument:(id)arg1 ;
-(void)didAddMessagesToMessageQueue:(id)arg1 ;
-(id)_newViewModel;
-(BOOL)_updateViewModel:(id)arg1 error:(id*)arg2 ;
-(void)messagePort:(id)arg1 didReceiveMessage:(id)arg2 ;
-(BOOL)_updateWebAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)_webAuthenticationViewModelWithViewModel:(id)arg1 ;
-(BOOL)_updateWebAuthenticationViewModel:(id)arg1 error:(id*)arg2 ;
@end

