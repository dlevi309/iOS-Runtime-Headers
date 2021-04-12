/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@interface AXThreadTimerTask : NSObject {

	BOOL cancel;
	BOOL finished;
	BOOL active;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancel; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(void)run;
-(BOOL)isActive;
-(BOOL)isCancelled;
-(void)setFinished:(BOOL)arg1 ;
-(id)block;
-(BOOL)isFinished;
-(void)setActive:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)runAfterDelay:(float)arg1 ;
-(void)setCancel:(BOOL)arg1 ;
@end

