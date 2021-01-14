/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1 {

	double _minimumTextIndentation;

}

@property (assign,nonatomic) double minimumTextIndentation;              //@synthesize minimumTextIndentation=_minimumTextIndentation - In the implementation block
-(CGRect)_adjustedTextFrameWithOriginalTextFrame:(CGRect)arg1 forCell:(id)arg2 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(double)minimumTextIndentation;
-(void)setMinimumTextIndentation:(double)arg1 ;
@end

