/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeChanged:(id)arg1 ;
-(void)_updateLabelFont;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
@end

