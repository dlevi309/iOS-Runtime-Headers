/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSXPCListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)start;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)arg1 ;
-(BOOL)_connection:(id)arg1 hasEntitlement:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(unsigned long long)_clientTypeForConnection:(id)arg1 ;
@end

