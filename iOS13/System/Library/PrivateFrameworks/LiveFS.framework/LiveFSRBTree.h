/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


#import <LiveFS/LiveFS-Structs.h>
@class NSMutableArray;

@interface LiveFSRBTree : NSObject {

	/*^block*/id ourComparitor;
	rb_tree* btree;
	SCD_Struct_Li1* btOps;
	NSMutableArray* _ourData;

}

@property (retain) NSMutableArray * ourData;              //@synthesize ourData=_ourData - In the implementation block
+(id)newWithComparitor:(/*^block*/id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)addEntry:(long long)arg1 ;
-(id)initWithComparitor:(/*^block*/id)arg1 ;
-(void)addDataBuffer:(id)arg1 ;
-(id)extractItemsInRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)ourData;
-(void)setOurData:(NSMutableArray *)arg1 ;
@end

