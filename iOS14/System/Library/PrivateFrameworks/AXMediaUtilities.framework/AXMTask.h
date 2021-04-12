/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface AXMTask : NSObject {

	BOOL _complete;
	/*^block*/id _taskCompleteBlock;

}

@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,copy) id taskCompleteBlock;                           //@synthesize taskCompleteBlock=_taskCompleteBlock - In the implementation block
-(BOOL)isComplete;
-(void)setTaskCompleteBlock:(id)arg1 ;
-(id)taskCompleteBlock;
-(void)setComplete:(BOOL)arg1 ;
-(void)markAsComplete:(BOOL)arg1 ;
@end

