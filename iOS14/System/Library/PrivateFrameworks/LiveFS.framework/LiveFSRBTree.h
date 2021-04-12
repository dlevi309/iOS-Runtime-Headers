/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)count;
-(void)addEntry:(long long)arg1 ;
-(NSMutableArray *)ourData;
-(void)dealloc;
-(id)initWithComparitor:(/*^block*/id)arg1 ;
-(void)addDataBuffer:(id)arg1 ;
-(id)extractItemsInRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setOurData:(NSMutableArray *)arg1 ;
@end

