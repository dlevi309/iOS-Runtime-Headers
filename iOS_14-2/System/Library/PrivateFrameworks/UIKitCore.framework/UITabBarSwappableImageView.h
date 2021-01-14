/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {

	UIImage* _value;
	UIImage* _alternate;
	UIImage* _landscapeValue;
	UIImage* _landscapeAlternate;
	BOOL _showAlternate;
	BOOL _showLandscape;

}
-(id)_selectedCompactImage;
-(void)setImage:(id)arg1 ;
-(void)setAlternateImage:(id)arg1 ;
-(void)setCurrentImage;
-(id)_selectedImage;
-(id)_unselectedImage;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_unselectedCompactImage;
-(void)showAlternateImage:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4 ;
-(void)setLandscape:(BOOL)arg1 ;
@end

