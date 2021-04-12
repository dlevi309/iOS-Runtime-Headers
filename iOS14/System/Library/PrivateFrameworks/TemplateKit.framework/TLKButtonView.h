/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class NSString, TLKStackView, TLKLabel;

@interface TLKButtonView : TLKView {

	NSString* _title;
	TLKStackView* _stackView;
	TLKLabel* _titleLabel;

}

@property (nonatomic,retain) TLKStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) TLKLabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
+(UIEdgeInsets)defaultLayoutMargins;
-(TLKLabel *)titleLabel;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(TLKStackView *)stackView;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)setStackView:(TLKStackView *)arg1 ;
-(NSString *)title;
@end

