/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <CalendarUIKit/EKSliceDescription.h>

@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription {

	EKSeriesDetails* _updatedMainSeriesDetails;
	EKSeriesDetails* _createdSeriesDetails;

}

@property (copy) EKSeriesDetails * updatedMainSeriesDetails;              //@synthesize updatedMainSeriesDetails=_updatedMainSeriesDetails - In the implementation block
@property (copy) EKSeriesDetails * createdSeriesDetails;                  //@synthesize createdSeriesDetails=_createdSeriesDetails - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKSeriesDetails *)updatedMainSeriesDetails;
-(void)setUpdatedMainSeriesDetails:(EKSeriesDetails *)arg1 ;
-(EKSeriesDetails *)createdSeriesDetails;
-(void)setCreatedSeriesDetails:(EKSeriesDetails *)arg1 ;
@end

