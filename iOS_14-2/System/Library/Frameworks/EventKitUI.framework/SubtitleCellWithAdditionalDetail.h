/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(UILabel *)additionalDetailLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)leftFrame:(CGRect)arg1 overlapsRightFrame:(CGRect)arg2 difference:(double*)arg3 ;
-(id)source;
@end

