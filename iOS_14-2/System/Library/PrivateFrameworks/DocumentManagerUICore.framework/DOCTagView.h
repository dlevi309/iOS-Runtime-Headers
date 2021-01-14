/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<DOCTagViewDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(double)maxWidth;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<DOCTagViewDelegate>)arg1 ;
-(void)updateColors;
-(void)layoutSubviews;
-(void)setMaxWidth:(double)arg1 ;
-(UIFont *)font;
-(UILabel *)tagNameLabel;
-(DOCTag *)tagValue;
-(void)setTagValue:(DOCTag *)arg1 ;
-(void)longPressGestureRecognizer:(id)arg1 ;
-(void)removeTag:(id)arg1 ;
@end

