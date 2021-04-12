/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKStackedTextItemGroupView, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupCell : PKTableViewCell {

	PKStackedTextItemGroupView* _groupView;
	long long _style;
	BOOL _animated;

}

@property (nonatomic,retain) PKStackedTextItemGroup * content; 
-(void)prepareForReuse;
-(PKStackedTextItemGroup *)content;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(CGRect)_separatorFrame;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

