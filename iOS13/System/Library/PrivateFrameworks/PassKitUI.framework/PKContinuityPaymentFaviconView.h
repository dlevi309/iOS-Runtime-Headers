/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 URL:(id)arg2 modelIdentifier:(id)arg3 merchantName:(id)arg4 ;
-(void)_loadMacImage;
-(void)_setupMonogram;
-(double)_iconVerticalOffset;
@end

