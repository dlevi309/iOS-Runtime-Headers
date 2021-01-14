/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSMutableDictionary, UIActivityIndicatorView, NSString;

@interface PXCapsuleButton : UIButton {

	NSMutableDictionary* _stateColorMap;
	UIActivityIndicatorView* _activityIndicatorView;
	NSString* _maxContentSizeCategory;

}

@property (assign,nonatomic) NSString * maxContentSizeCategory;              //@synthesize maxContentSizeCategory=_maxContentSizeCategory - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)_titleFont;
-(id)initWithColor:(id)arg1 ;
-(void)setColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)colorForState:(unsigned long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaxContentSizeCategory:(NSString *)arg1 ;
-(void)startLoadingAnimation;
-(void)stopLoadingAnimation;
-(id)_backgroundImageWithColor:(id)arg1 ;
-(NSString *)maxContentSizeCategory;
@end

