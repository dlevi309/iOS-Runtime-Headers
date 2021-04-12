/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <libobjc.A.dylib/_DUIClientSessionAccessibility.h>

@protocol AXDragSessionDragManager, AXDragSessionDelegate;
@class NSXPCConnection;

@interface AXDragSession : NSObject <_DUIClientSessionAccessibility> {

	NSXPCConnection* _connection;
	id<AXDragSessionDragManager> _manager;
	BOOL _resumed;
	BOOL _aborted;
	id<AXDragSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AXDragSessionDelegate>)delegate;
-(void)setDelegate:(id<AXDragSessionDelegate>)arg1 ;
-(void)cancel;
-(void)resume;
-(id)manager;
-(void)abort;
-(void)setManager:(id)arg1 ;
-(oneway void)dragWillBeginWithReply:(/*^block*/id)arg1 ;
-(oneway void)dragStatusDidChange:(id)arg1 ;
-(oneway void)dragDidEndWithOperation:(unsigned long long)arg1 ;
-(id)_serverSession;
-(id)initWithDruidConnection:(id)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 forRequestor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)drop;
@end

