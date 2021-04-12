/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, UILabel, NSArray, TVImageProxy, NSString;

@interface _TVAlertView : UIView {

	_TVImageView* _imageView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;
	NSArray* _additionalLabelViews;
	TVImageProxy* _imageProxy;
	NSString* _title;
	NSString* _message;
	NSArray* _additionalLabels;
	CGSize _imageSize;

}

@property (nonatomic,retain) TVImageProxy * imageProxy;              //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * additionalLabels;               //@synthesize additionalLabels=_additionalLabels - In the implementation block
+(id)_newLabelWithText:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setAdditionalLabels:(NSArray *)arg1 ;
-(TVImageProxy *)imageProxy;
-(NSArray *)additionalLabels;
@end

