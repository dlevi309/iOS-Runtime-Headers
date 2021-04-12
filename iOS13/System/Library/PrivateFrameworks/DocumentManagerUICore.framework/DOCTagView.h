/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@protocol DOCTagViewDelegate;
@class DOCTag, UILabel, NSString, UIFont;

@interface DOCTagView : UIView <UIContextMenuInteractionDelegate> {

	DOCTag* _tagValue;
	double _maxWidth;
	id<DOCTagViewDelegate> _delegate;
	UILabel* _tagNameLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UILabel * tagNameLabel;                            //@synthesize tagNameLabel=_tagNameLabel - In the implementation block
@property (nonatomic,copy) DOCTag * tagValue;                                     //@synthesize tagValue=_tagValue - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (assign,nonatomic) double maxWidth;                                     //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic,__weak) id<DOCTagViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DOCTagViewDelegate>)delegate;
-(void)setDelegate:(id<DOCTagViewDelegate>)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)viewForLastBaselineLayout;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)updateColors;
-(void)setTagValue:(DOCTag *)arg1 ;
-(UILabel *)tagNameLabel;
-(DOCTag *)tagValue;
-(void)longPressGestureRecognizer:(id)arg1 ;
-(void)removeTag:(id)arg1 ;
@end

