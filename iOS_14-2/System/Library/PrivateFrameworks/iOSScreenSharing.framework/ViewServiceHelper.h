/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iOSScreenSharing.framework/iOSScreenSharing
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ViewServiceProtocol.h>

@protocol ViewServiceHelperDelegate;
@class NSObject, NSXPCListener, NSString;

@interface ViewServiceHelper : NSObject <NSXPCListenerDelegate, ViewServiceProtocol> {

	NSObject*<ViewServiceHelperDelegate> _delegate;
	NSXPCListener* _listener;

}

@property (retain) NSXPCListener * listener;                                   //@synthesize listener=_listener - In the implementation block
@property (assign) NSObject*<ViewServiceHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(id)init;
-(NSObject*<ViewServiceHelperDelegate>)delegate;
-(void)setDelegate:(NSObject*<ViewServiceHelperDelegate>)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)handleStatusBarTap;
-(void)termsAndConditionsResponse:(id)arg1 ;
-(void)pauseResumeResponse:(id)arg1 ;
-(void)pidNotification:(id)arg1 ;
@end

