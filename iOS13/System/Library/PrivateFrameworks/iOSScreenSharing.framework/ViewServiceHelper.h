/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)run;
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

