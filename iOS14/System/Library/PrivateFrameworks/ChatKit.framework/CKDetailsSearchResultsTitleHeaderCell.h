/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchResultsTitleHeaderCell.h>

@protocol CKDetailsSearchResultsTitleHeaderCellDelegate;
@class CALayer;

@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell {

	id<CKDetailsSearchResultsTitleHeaderCellDelegate> _detailsViewDelegate;
	CALayer* _bottomHairline;

}

@property (nonatomic,retain) CALayer * bottomHairline;                                                           //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (assign,nonatomic) id<CKDetailsSearchResultsTitleHeaderCellDelegate> detailsViewDelegate;              //@synthesize detailsViewDelegate=_detailsViewDelegate - In the implementation block
+(id)supplementaryViewType;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)_showAllButtonTapped:(id)arg1 ;
-(void)setBottomHairline:(CALayer *)arg1 ;
-(id<CKDetailsSearchResultsTitleHeaderCellDelegate>)detailsViewDelegate;
-(void)setDetailsViewDelegate:(id<CKDetailsSearchResultsTitleHeaderCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CALayer *)bottomHairline;
@end

