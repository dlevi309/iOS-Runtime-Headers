/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)delayForNewForceReconcileRequest;
-(id)init;
-(void)forceReconcile:(/*^block*/id)arg1 ;
-(void)setReconcileArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)reconcileArray;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
@end

