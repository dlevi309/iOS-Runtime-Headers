/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSNumber, NSMutableArray;

@interface STHorizontallySegmentedView : UIView {

	BOOL _useVibrancy;
	BOOL _truncateLabels;
	NSArray* _segmentItems;
	NSNumber* _numberOfLines;
	unsigned long long _maximumNumberOfLines;
	double _previousWidth;
	NSMutableArray* _segmentViews;
	NSArray* _segmentConstraints;

}

@property (nonatomic,retain) NSNumber * numberOfLines;                     //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (readonly) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (readonly) BOOL useVibrancy;                                     //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (readonly) BOOL truncateLabels;                                  //@synthesize truncateLabels=_truncateLabels - In the implementation block
@property (assign,nonatomic) double previousWidth;                         //@synthesize previousWidth=_previousWidth - In the implementation block
@property (nonatomic,readonly) NSMutableArray * segmentViews;              //@synthesize segmentViews=_segmentViews - In the implementation block
@property (nonatomic,copy) NSArray * segmentConstraints;                   //@synthesize segmentConstraints=_segmentConstraints - In the implementation block
@property (nonatomic,copy) NSArray * segmentItems;                         //@synthesize segmentItems=_segmentItems - In the implementation block
-(void)setSegmentConstraints:(NSArray *)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(id)init;
-(void)setNumberOfLines:(NSNumber *)arg1 ;
-(id)initWithVibrancy:(BOOL)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(BOOL)arg3 ;
-(void)_setUpConstraints;
-(BOOL)useVibrancy;
-(void)setSegmentItems:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(double)previousWidth;
-(void)_stHorizontallySegmentedViewCommonInit;
-(NSMutableArray *)segmentViews;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)segmentItems;
-(NSArray *)segmentConstraints;
-(void)setPreviousWidth:(double)arg1 ;
-(BOOL)truncateLabels;
-(NSNumber *)numberOfLines;
@end

