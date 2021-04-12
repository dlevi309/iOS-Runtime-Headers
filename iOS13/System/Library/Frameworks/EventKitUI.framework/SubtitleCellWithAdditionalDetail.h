/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUITableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUITableViewCell {

	UILabel* _additionalDetailLabel;
	id _source;

}

@property (nonatomic,retain,readonly) UILabel * additionalDetailLabel; 
@property (assign) id source;                                                       //@synthesize source=_source - In the implementation block
-(void)setSource:(id)arg1 ;
-(id)source;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)additionalDetailLabel;
-(BOOL)leftFrame:(CGRect)arg1 overlapsRightFrame:(CGRect)arg2 difference:(double*)arg3 ;
@end

