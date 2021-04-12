/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject {

	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(id)init;
-(NSMutableArray *)operations;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(void)_addOperation:(id)arg1 ;
-(void)_executeOperationsOnQueue:(id)arg1 ;
@end

