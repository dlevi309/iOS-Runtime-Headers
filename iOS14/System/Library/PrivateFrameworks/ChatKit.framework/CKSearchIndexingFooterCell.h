/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supplementaryViewType;
+(double)desiredZPosition;
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitleLabelHidden:(BOOL)arg1 ;
-(BOOL)titleLabelHidden;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(NSString *)subtitleString;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(NSString *)titleString;
-(UIEdgeInsets)marginInsets;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setSubtitleString:(NSString *)arg1 ;
@end

