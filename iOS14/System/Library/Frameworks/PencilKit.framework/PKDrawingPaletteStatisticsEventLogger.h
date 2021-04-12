/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKDrawingPaletteStatistics.h>

@class NSString;

@interface PKDrawingPaletteStatisticsEventLogger : NSObject <PKDrawingPaletteStatistics> {

	double _lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
	double _lastInkingToolUsedOverNonDrawingAttachmentTimestamp;

}

@property (assign,nonatomic) double lastHandwritingToolUsedOverDrawingAttachmentTimestamp;              //@synthesize lastHandwritingToolUsedOverDrawingAttachmentTimestamp=_lastHandwritingToolUsedOverDrawingAttachmentTimestamp - In the implementation block
@property (assign,nonatomic) double lastInkingToolUsedOverNonDrawingAttachmentTimestamp;                //@synthesize lastInkingToolUsedOverNonDrawingAttachmentTimestamp=_lastInkingToolUsedOverNonDrawingAttachmentTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:(double)arg1 ;
-(void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:(double)arg1 ;
-(double)lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
-(void)setLastHandwritingToolUsedOverDrawingAttachmentTimestamp:(double)arg1 ;
-(double)lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
-(void)setLastInkingToolUsedOverNonDrawingAttachmentTimestamp:(double)arg1 ;
-(void)recordHandwritingToolSelected;
@end

