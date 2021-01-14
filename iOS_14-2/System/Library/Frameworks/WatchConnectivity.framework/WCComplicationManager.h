/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/WCPrivateXPCManagerDelegate.h>

@protocol WCComplicationManagerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface WCComplicationManager : NSObject <WCPrivateXPCManagerDelegate> {

	NSObject*<WCComplicationManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<WCComplicationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<WCComplicationManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<WCComplicationManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)xpcManager:(id)arg1 handlePingForExtensionBundleID:(id)arg2 ;
-(void)xpcManager:(id)arg1 isExtensionPrivileged:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcManager:(id)arg1 handlePairedSyncComplicationsStartedWithCompletionHandler:(/*^block*/id)arg2 ;
@end

