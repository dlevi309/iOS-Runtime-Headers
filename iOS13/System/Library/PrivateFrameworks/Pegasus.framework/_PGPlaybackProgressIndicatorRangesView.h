/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray;

@interface _PGPlaybackProgressIndicatorRangesView : UIView {

	UIColor* _rangeColor;
	NSArray* _ranges;

}

@property (nonatomic,retain) UIColor * rangeColor;              //@synthesize rangeColor=_rangeColor - In the implementation block
@property (nonatomic,retain) NSArray * ranges;                  //@synthesize ranges=_ranges - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRangeColor:(UIColor *)arg1 ;
-(void)setRanges:(NSArray *)arg1 ;
-(NSArray *)ranges;
-(UIColor *)rangeColor;
@end

