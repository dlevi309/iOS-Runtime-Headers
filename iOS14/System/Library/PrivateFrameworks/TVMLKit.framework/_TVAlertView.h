/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(CGSize)imageSize;
-(NSString *)message;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(NSString *)title;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setAdditionalLabels:(NSArray *)arg1 ;
-(NSArray *)additionalLabels;
@end

