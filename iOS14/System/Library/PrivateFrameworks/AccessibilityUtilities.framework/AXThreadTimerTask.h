/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(void)setActive:(BOOL)arg1 ;
-(void)run;
-(void)runAfterDelay:(float)arg1 ;
-(void)setBlock:(id)arg1 ;
-(BOOL)isActive;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
-(void)setCancel:(BOOL)arg1 ;
-(BOOL)isCancelled;
@end

