/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didMoveToWindow;
-(id)_selectedImage;
-(void)showAlternateImage:(BOOL)arg1 ;
-(id)_unselectedImage;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4 ;
-(id)_unselectedCompactImage;
-(id)_selectedCompactImage;
-(void)setAlternateImage:(id)arg1 ;
-(void)setLandscape:(BOOL)arg1 ;
@end

