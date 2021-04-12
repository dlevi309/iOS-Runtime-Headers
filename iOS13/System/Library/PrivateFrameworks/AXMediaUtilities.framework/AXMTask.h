/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface AXMTask : NSObject {

	BOOL _complete;
	/*^block*/id _taskCompleteBlock;

}

@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,copy) id taskCompleteBlock;                           //@synthesize taskCompleteBlock=_taskCompleteBlock - In the implementation block
-(BOOL)isComplete;
-(void)setComplete:(BOOL)arg1 ;
-(void)markAsComplete:(BOOL)arg1 ;
-(void)setTaskCompleteBlock:(id)arg1 ;
-(id)taskCompleteBlock;
@end

