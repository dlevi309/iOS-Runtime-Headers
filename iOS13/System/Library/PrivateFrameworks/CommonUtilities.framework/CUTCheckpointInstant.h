/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(id)initWithDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(void)_touchDate;
-(void)mergeWithCheckpoint:(id)arg1 ;
@end

