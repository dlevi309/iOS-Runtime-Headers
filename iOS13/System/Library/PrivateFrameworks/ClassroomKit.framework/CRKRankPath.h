/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSArray;

@interface CRKRankPath : NSObject {

	NSArray* _ranks;

}

@property (nonatomic,copy) NSArray * ranks;                   //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,readonly) long long length; 
-(id)init;
-(long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(NSArray *)ranks;
-(void)setRanks:(NSArray *)arg1 ;
-(id)initWithRanks:(id)arg1 ;
-(BOOL)isEqualToRankPath:(id)arg1 ;
-(id)initWithRank:(long long)arg1 ;
-(id)rankPathByAppendingRank:(long long)arg1 ;
@end

