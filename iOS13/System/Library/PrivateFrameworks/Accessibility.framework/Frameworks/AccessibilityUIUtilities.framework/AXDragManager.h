/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <libobjc.A.dylib/AXDragEndpointVendorDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AXDragSessionDragManager.h>
#import <libobjc.A.dylib/AXDragSessionDelegate.h>

@protocol OS_dispatch_queue, AXDragManagerDelegate;
@class AXDragEndpointVendor, NSXPCListener, NSMutableArray, NSObject, NSString, AXDispatchTimer, AXDragSession;

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager, AXDragSessionDelegate> {

	AXDragEndpointVendor* _vendor;
	NSXPCListener* _endpointListener;
	NSMutableArray* _activeSessions;
	NSObject*<OS_dispatch_queue> _dragStateQueue;
	int _pidForDrag;
	id<AXDragManagerDelegate> _delegate;
	NSString* _machServiceName;
	/*^block*/id _dragStartCompletionHandler;
	AXDispatchTimer* _dragStartTimer;
	AXDragSession* _dragSession;

}

@property (assign,nonatomic) int pidForDrag;                                         //@synthesize pidForDrag=_pidForDrag - In the implementation block
@property (nonatomic,copy) id dragStartCompletionHandler;                            //@synthesize dragStartCompletionHandler=_dragStartCompletionHandler - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * dragStartTimer;                       //@synthesize dragStartTimer=_dragStartTimer - In the implementation block
@property (nonatomic,retain) AXDragSession * dragSession;                            //@synthesize dragSession=_dragSession - In the implementation block
@property (assign,nonatomic,__weak) id<AXDragManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isDragActive; 
@property (nonatomic,readonly) NSString * machServiceName;                           //@synthesize machServiceName=_machServiceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AXDragManagerDelegate>)delegate;
-(void)setDelegate:(id<AXDragManagerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSString *)machServiceName;
-(void)moveToPoint:(CGPoint)arg1 ;
-(AXDragSession *)dragSession;
-(void)setDragSession:(AXDragSession *)arg1 ;
-(void)cancelDrag;
-(BOOL)isDragActive;
-(int)pidForDrag;
-(void)setPidForDrag:(int)arg1 ;
-(AXDispatchTimer *)dragStartTimer;
-(id)dragStartCompletionHandler;
-(void)setDragStartCompletionHandler:(id)arg1 ;
-(BOOL)_shouldAllowEndpointVendForRequestingConnection:(id)arg1 ;
-(void)setDragStartTimer:(AXDispatchTimer *)arg1 ;
-(void)drop;
-(id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2 ;
-(void)sessionWasTerminated:(id)arg1 ;
-(void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2 ;
-(void)dragSessionChanged:(id)arg1 toStatus:(id)arg2 ;
-(void)dragSessionWasTerminated:(id)arg1 ;
-(void)dragSession:(id)arg1 movedToPoint:(CGPoint)arg2 byRequestor:(id)arg3 ;
-(void)waitForDragStartFromPid:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)moveToAndDropAtPoint:(CGPoint)arg1 ;
@end

