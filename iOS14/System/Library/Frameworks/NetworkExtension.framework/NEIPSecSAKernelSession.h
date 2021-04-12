/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIPSecSASession.h>

@interface NEIPSecSAKernelSession : NEIPSecSASession {

	NEIPSecDB_sRef _internalSession;

}

@property (assign,nonatomic) NEIPSecDB_sRef internalSession;              //@synthesize internalSession=_internalSession - In the implementation block
-(BOOL)addSA:(id)arg1 ;
-(void)setDelegateQueue:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3 ;
-(void)invalidate;
-(BOOL)updateSA:(id)arg1 ;
-(BOOL)addLarvalSA:(id)arg1 ;
-(BOOL)migrateSA:(id)arg1 ;
-(void)startIdleTimeout:(unsigned)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3 ;
-(void)startBlackholeDetection:(unsigned)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3 ;
-(BOOL)removeSA:(id)arg1 ;
-(void)removeAllSAs;
-(void)dealloc;
-(NEIPSecDB_sRef)internalSession;
-(void)setInternalSession:(NEIPSecDB_sRef)arg1 ;
@end

