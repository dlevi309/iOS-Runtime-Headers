/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKEvent, EKSeriesDetails;

@interface EKSliceDescription : NSObject <NSCopying> {

	EKEvent* _originalEventToSliceOn;
	EKSeriesDetails* _originalMainSeriesDetails;

}

@property (retain) EKEvent * originalEventToSliceOn;                         //@synthesize originalEventToSliceOn=_originalEventToSliceOn - In the implementation block
@property (retain) EKSeriesDetails * originalMainSeriesDetails;              //@synthesize originalMainSeriesDetails=_originalMainSeriesDetails - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKEvent *)originalEventToSliceOn;
-(void)setOriginalEventToSliceOn:(EKEvent *)arg1 ;
-(EKSeriesDetails *)originalMainSeriesDetails;
-(void)setOriginalMainSeriesDetails:(EKSeriesDetails *)arg1 ;
@end

