/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(void)setNumberOfLines:(NSNumber *)arg1 ;
-(void)layoutSubviews;
-(NSNumber *)numberOfLines;
-(void)_setUpConstraints;
-(NSMutableArray *)segmentViews;
-(BOOL)useVibrancy;
-(void)setSegmentItems:(NSArray *)arg1 ;
-(void)_stHorizontallySegmentedViewCommonInit;
-(id)initWithVibrancy:(BOOL)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(BOOL)arg3 ;
-(BOOL)truncateLabels;
-(double)previousWidth;
-(void)setPreviousWidth:(double)arg1 ;
-(NSArray *)segmentConstraints;
-(void)setSegmentConstraints:(NSArray *)arg1 ;
-(NSArray *)segmentItems;
@end

