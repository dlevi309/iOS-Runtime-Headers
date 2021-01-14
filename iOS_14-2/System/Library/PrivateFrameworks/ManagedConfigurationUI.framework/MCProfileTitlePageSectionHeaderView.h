/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIView;

@interface MCProfileTitlePageSectionHeaderView : UIView {

	NSString* _text;
	UILabel* _label;
	UIView* _separatorLine;

}

@property (nonatomic,retain) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;              //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,copy) NSString * text;                       //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
@end

