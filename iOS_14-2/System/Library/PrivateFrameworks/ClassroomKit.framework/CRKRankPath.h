/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSArray;

@interface CRKRankPath : NSObject {

	NSArray* _ranks;

}

@property (nonatomic,copy) NSArray * ranks;                   //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,readonly) long long length; 
-(long long)compare:(id)arg1 ;
-(id)init;
-(long long)length;
-(unsigned long long)hash;
-(NSArray *)ranks;
-(void)setRanks:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRanks:(id)arg1 ;
-(BOOL)isEqualToRankPath:(id)arg1 ;
-(id)initWithRank:(long long)arg1 ;
-(id)rankPathByAppendingRank:(long long)arg1 ;
@end

