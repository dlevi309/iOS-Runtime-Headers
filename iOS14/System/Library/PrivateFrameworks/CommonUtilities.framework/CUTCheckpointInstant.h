/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(void)_touchDate;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(void)mergeWithCheckpoint:(id)arg1 ;
@end

