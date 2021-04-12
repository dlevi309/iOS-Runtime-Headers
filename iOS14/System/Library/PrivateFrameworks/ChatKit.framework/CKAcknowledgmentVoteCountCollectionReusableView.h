/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView {

	UILabel* _countLabel;

}

@property (nonatomic,retain) UILabel * countLabel;              //@synthesize countLabel=_countLabel - In the implementation block
+(id)supplementaryViewKind;
+(id)reuseIdentifier;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCountLabel:(UILabel *)arg1 ;
-(UILabel *)countLabel;
@end

