/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

