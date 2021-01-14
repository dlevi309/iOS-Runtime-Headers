/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)classForItemType:(long long)arg1 ;
+(id)reuseIdentifier;
-(CKBadgeView *)badgeView;
-(void)setBrowserLabel:(UILabel *)arg1 ;
-(CGRect)browserCellIconFrame;
-(CKBrowserSelectionLabelAccessoryView *)shinyStatusView;
-(BOOL)shouldShowLabel;
-(double)browserCellSelectionBorderOutset;
-(void)setShinyStatus:(unsigned long long)arg1 ;
-(void)setShinyStatusView:(CKBrowserSelectionLabelAccessoryView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKBrowserCellDelegate>)delegate;
-(CGRect)selectionFrame;
-(void)setBadgeView:(CKBadgeView *)arg1 ;
-(void)setSelectionFrame:(CGRect)arg1 ;
-(BOOL)jitter;
-(void)prepareForReuse;
-(void)setShouldShowLabel:(BOOL)arg1 ;
-(void)setJitter:(BOOL)arg1 ;
-(void)setDelegate:(id<CKBrowserCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)borderView;
-(UIView *)iconView;
-(void)setBorderView:(UIImageView *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(unsigned long long)shinyStatus;
-(void)setBorderStyle:(long long)arg1 ;
-(UILabel *)browserLabel;
@end

