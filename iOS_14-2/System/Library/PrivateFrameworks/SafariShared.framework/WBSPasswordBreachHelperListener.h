/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface WBSPasswordBreachHelperListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)_connectionHasValidEntitlements:(id)arg1 ;
@end

