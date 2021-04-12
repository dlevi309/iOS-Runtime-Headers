/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchResultsTitleHeaderCell.h>

@class CALayer;

@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell {

	CALayer* _bottomHairline;

}

@property (nonatomic,retain) CALayer * bottomHairline;              //@synthesize bottomHairline=_bottomHairline - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(void)setTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setBottomHairline:(CALayer *)arg1 ;
-(CALayer *)bottomHairline;
@end

