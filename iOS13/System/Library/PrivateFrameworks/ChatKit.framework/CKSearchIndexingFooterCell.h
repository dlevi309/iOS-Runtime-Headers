/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@class NSString, UILabel;

@interface CKSearchIndexingFooterCell : UICollectionReusableView <CKSearchResultSupplementryCell> {

	NSString* _titleString;
	NSString* _subtitleString;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UILabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) BOOL titleLabelHidden; 
@property (nonatomic,copy) NSString * titleString;                   //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * subtitleString;                //@synthesize subtitleString=_subtitleString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
+(id)reuseIdentifier;
+(id)supplementaryViewType;
+(double)desiredZPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(BOOL)titleLabelHidden;
-(void)setTitleLabelHidden:(BOOL)arg1 ;
-(void)setSubtitleString:(NSString *)arg1 ;
-(NSString *)subtitleString;
@end

