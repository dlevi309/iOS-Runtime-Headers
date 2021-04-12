/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIPSecSASession.h>

@interface NEIPSecSAKernelSession : NEIPSecSASession {

	NEIPSecDB_sRef _internalSession;

}

@property (assign,nonatomic) NEIPSecDB_sRef internalSession;              //@synthesize internalSession=_internalSession - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setDelegateQueue:(id)arg1 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3 ;
-(BOOL)addLarvalSA:(id)arg1 ;
-(BOOL)addSA:(id)arg1 ;
-(BOOL)updateSA:(id)arg1 ;
-(void)startIdleTimeout:(unsigned)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3 ;
-(void)startBlackholeDetection:(unsigned)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3 ;
-(BOOL)migrateSA:(id)arg1 ;
-(BOOL)removeSA:(id)arg1 ;
-(void)removeAllSAs;
-(NEIPSecDB_sRef)internalSession;
-(void)setInternalSession:(NEIPSecDB_sRef)arg1 ;
@end

