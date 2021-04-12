/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/ADIDManager_XPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableArray, NSString;

@interface ADIDManagerService : ADSingleton <ADIDManager_XPC, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _forceReconcileQueue;
	NSXPCListener* _listener;
	NSMutableArray* _reconcileArray;

}

@property (retain) NSXPCListener * listener;                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * reconcileArray;              //@synthesize reconcileArray=_reconcileArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)forceReconcile:(/*^block*/id)arg1 ;
-(unsigned long long)delayForNewForceReconcileRequest;
-(NSMutableArray *)reconcileArray;
-(void)setReconcileArray:(NSMutableArray *)arg1 ;
@end

