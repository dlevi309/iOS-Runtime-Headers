/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(void)abort;
-(id<AXDragSessionDelegate>)delegate;
-(void)setManager:(id)arg1 ;
-(void)drop;
-(void)setDelegate:(id<AXDragSessionDelegate>)arg1 ;
-(id)initWithDruidConnection:(id)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 forRequestor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)manager;
-(oneway void)dragWillBeginWithReply:(/*^block*/id)arg1 ;
-(oneway void)dragStatusDidChange:(id)arg1 ;
-(oneway void)dragDidEndWithOperation:(unsigned long long)arg1 ;
-(void)cancel;
-(void)resume;
-(id)_serverSession;
@end

