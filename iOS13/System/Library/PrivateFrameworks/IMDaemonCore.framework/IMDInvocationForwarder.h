/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableArray, NSLock;

@interface IMDInvocationForwarder : NSObject {

	NSMutableArray* _targets;
	NSLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * _targets;              //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSLock * _lock;                         //@synthesize lock=_lock - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSLock *)_lock;
-(NSMutableArray *)_targets;
-(void)removeTarget:(id)arg1 ;
-(void)addTarget:(id)arg1 ;
-(id)initWithTargets:(id)arg1 ;
-(void)set_targets:(NSMutableArray *)arg1 ;
-(void)set_lock:(NSLock *)arg1 ;
@end

