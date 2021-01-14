/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointRange : CUTCheckpointSignpost {

	BOOL _ordered;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (assign,getter=isOrdered,nonatomic) BOOL ordered;              //@synthesize ordered=_ordered - In the implementation block
-(BOOL)isOrdered;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setOrdered:(BOOL)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)description;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)_touchEndDate;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(void)mergeWithCheckpoint:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(void)_touchStartDate;
@end

