/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject {

	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(void)setOperations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)operations;
-(id)init;
-(void)_addOperation:(id)arg1 ;
-(void)_executeOperationsOnQueue:(id)arg1 ;
@end

