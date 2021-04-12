/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <AppPredictionInternal/ATXValueEstimationEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ATXLazyOperator;

@interface ATXSessionEvent : ATXValueEstimationEvent <NSCopying> {

	BOOL _processed;
	NSMutableArray* _donations;
	ATXLazyOperator* _duration;
	NSMutableArray* _unprocessedDonations;

}

@property (nonatomic,readonly) NSMutableArray * donations;                       //@synthesize donations=_donations - In the implementation block
@property (nonatomic,readonly) BOOL processed;                                   //@synthesize processed=_processed - In the implementation block
@property (nonatomic,retain) ATXLazyOperator * duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * unprocessedDonations;              //@synthesize unprocessedDonations=_unprocessedDonations - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ATXLazyOperator *)duration;
-(void)setDuration:(ATXLazyOperator *)arg1 ;
-(BOOL)processed;
-(NSMutableArray *)donations;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventOwner:(id)arg3 ;
-(void)addDonation:(id)arg1 ;
-(NSMutableArray *)unprocessedDonations;
-(void)setUnprocessedDonations:(NSMutableArray *)arg1 ;
@end

