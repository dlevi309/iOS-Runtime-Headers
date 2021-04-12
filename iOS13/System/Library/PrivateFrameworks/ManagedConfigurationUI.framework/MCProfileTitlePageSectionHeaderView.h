/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
@end

