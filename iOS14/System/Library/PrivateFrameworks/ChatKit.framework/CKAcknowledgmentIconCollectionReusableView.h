/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIImageView;

@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView {

	UIImageView* _glyphImageView;

}

@property (nonatomic,retain) UIImageView * glyphImageView;              //@synthesize glyphImageView=_glyphImageView - In the implementation block
+(id)supplementaryViewKind;
+(id)reuseIdentifier;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(UIImageView *)glyphImageView;
@end

