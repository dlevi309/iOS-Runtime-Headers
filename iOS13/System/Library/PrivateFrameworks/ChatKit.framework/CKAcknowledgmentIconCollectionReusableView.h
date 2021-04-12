/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIImageView;

@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView {

	UIImageView* _glyphImageView;

}

@property (nonatomic,retain) UIImageView * glyphImageView;              //@synthesize glyphImageView=_glyphImageView - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(UIImageView *)glyphImageView;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
@end

