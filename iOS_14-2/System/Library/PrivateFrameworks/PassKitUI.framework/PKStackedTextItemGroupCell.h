/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKStackedTextItemGroup *)content;
-(CGRect)_separatorFrame;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
@end

