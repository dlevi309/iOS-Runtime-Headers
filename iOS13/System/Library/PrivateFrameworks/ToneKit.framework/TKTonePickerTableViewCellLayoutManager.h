/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1 {

	double _minimumTextIndentation;

}

@property (assign,nonatomic) double minimumTextIndentation;              //@synthesize minimumTextIndentation=_minimumTextIndentation - In the implementation block
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(void)setMinimumTextIndentation:(double)arg1 ;
-(double)minimumTextIndentation;
-(CGRect)_adjustedTextFrameWithOriginalTextFrame:(CGRect)arg1 forCell:(id)arg2 ;
@end

