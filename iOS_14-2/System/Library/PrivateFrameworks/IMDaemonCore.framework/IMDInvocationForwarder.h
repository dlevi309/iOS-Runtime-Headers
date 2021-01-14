/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableArray, NSLock;

@interface IMDInvocationForwarder : NSObject {

	NSMutableArray* _targets;
	NSLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * _targets;              //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSLock * _lock;                         //@synthesize lock=_lock - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSLock *)_lock;
-(void)removeTarget:(id)arg1 ;
-(NSMutableArray *)_targets;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)addTarget:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTargets:(id)arg1 ;
-(void)set_targets:(NSMutableArray *)arg1 ;
-(void)set_lock:(NSLock *)arg1 ;
@end

