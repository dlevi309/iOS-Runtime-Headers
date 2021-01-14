/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface PXTextBannerView : UIView {

	UIImageView* _backgroundView;
	UILabel* _textLabel;
	BOOL _destructiveText;
	NSString* _text;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (assign,getter=isDestructiveText,nonatomic) BOOL destructiveText;              //@synthesize destructiveText=_destructiveText - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
-(BOOL)isDestructiveText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setDestructiveText:(BOOL)arg1 ;
-(void)_updateSubviews;
-(void)setTextAlignment:(long long)arg1 ;
@end

