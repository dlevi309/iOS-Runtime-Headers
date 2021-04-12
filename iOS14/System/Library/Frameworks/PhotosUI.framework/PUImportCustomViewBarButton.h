/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, NSString;

@interface PUImportCustomViewBarButton : UIButton {

	UIView* _customView;
	NSString* _customAccessibilityLabel;

}

@property (nonatomic,readonly) UIView * customView;                          //@synthesize customView=_customView - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;              //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
-(id)accessibilityLabel;
-(CGSize)intrinsicContentSize;
-(UIView *)customView;
-(void)updateConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)customAccessibilityLabel;
-(void)sizeToFit;
-(id)initWithCustomView:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

