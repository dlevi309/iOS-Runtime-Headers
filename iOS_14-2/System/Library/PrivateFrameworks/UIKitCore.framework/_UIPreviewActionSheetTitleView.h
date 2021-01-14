/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface _UIPreviewActionSheetTitleView : UIView {

	NSString* _title;
	UILabel* _label;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;              //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_contentSizeChanged:(id)arg1 ;
-(void)_updateLabelFont;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)title;
-(void)dealloc;
@end

