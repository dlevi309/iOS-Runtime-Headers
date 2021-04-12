/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSURLSession, UIImageView, UIView, PKShapeView, NSString;

@interface PKContinuityPaymentFaviconView : UIView {

	NSURLSession* _urlSession;
	UIImageView* _macImageView;
	UIImageView* _imageView;
	UIView* _monogramView;
	UIView* _imageShadowView;
	PKShapeView* _maskView;
	NSString* _modelIdentifier;
	NSString* _merchantName;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 URL:(id)arg2 modelIdentifier:(id)arg3 merchantName:(id)arg4 ;
-(void)layoutSubviews;
-(void)_loadMacImage;
-(void)_setupMonogram;
-(double)_iconVerticalOffset;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

