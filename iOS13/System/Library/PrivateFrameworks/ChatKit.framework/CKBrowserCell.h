/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol CKBrowserCellDelegate;
@class CKBadgeView, CKBrowserSelectionLabelAccessoryView, UILabel, UIImageView, UIView;

@interface CKBrowserCell : UICollectionViewCell {

	BOOL _jitter;
	BOOL _shouldShowLabel;
	id<CKBrowserCellDelegate> _delegate;
	CKBadgeView* _badgeView;
	unsigned long long _shinyStatus;
	CKBrowserSelectionLabelAccessoryView* _shinyStatusView;
	UILabel* _browserLabel;
	UIImageView* _borderView;
	CGRect _selectionFrame;

}

@property (readonly) UIView * iconView; 
@property (assign,nonatomic) unsigned long long shinyStatus;                                      //@synthesize shinyStatus=_shinyStatus - In the implementation block
@property (nonatomic,retain) CKBrowserSelectionLabelAccessoryView * shinyStatusView;              //@synthesize shinyStatusView=_shinyStatusView - In the implementation block
@property (nonatomic,retain) UILabel * browserLabel;                                              //@synthesize browserLabel=_browserLabel - In the implementation block
@property (nonatomic,retain) UIImageView * borderView;                                            //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) CGRect selectionFrame;                                               //@synthesize selectionFrame=_selectionFrame - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserCellDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKBadgeView * badgeView;                                             //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) BOOL jitter;                                                         //@synthesize jitter=_jitter - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLabel;                                                //@synthesize shouldShowLabel=_shouldShowLabel - In the implementation block
+(id)reuseIdentifier;
+(Class)classForItemType:(long long)arg1 ;
-(id<CKBrowserCellDelegate>)delegate;
-(void)setDelegate:(id<CKBrowserCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBorderStyle:(long long)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(CKBadgeView *)badgeView;
-(UIView *)iconView;
-(void)setBadgeView:(CKBadgeView *)arg1 ;
-(CGRect)selectionFrame;
-(void)setSelectionFrame:(CGRect)arg1 ;
-(void)setShouldShowLabel:(BOOL)arg1 ;
-(void)setBrowserLabel:(UILabel *)arg1 ;
-(UILabel *)browserLabel;
-(void)setBorderView:(UIImageView *)arg1 ;
-(UIImageView *)borderView;
-(CGRect)browserCellIconFrame;
-(CKBrowserSelectionLabelAccessoryView *)shinyStatusView;
-(double)browserCellSelectionBorderOutset;
-(BOOL)jitter;
-(void)setJitter:(BOOL)arg1 ;
-(BOOL)shouldShowLabel;
-(unsigned long long)shinyStatus;
-(void)setShinyStatus:(unsigned long long)arg1 ;
-(void)setShinyStatusView:(CKBrowserSelectionLabelAccessoryView *)arg1 ;
@end

