/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIButton.h>

@class SearchUIImage;

@interface SearchUIImageButton : UIButton {

	SearchUIImage* _unselectedImage;
	SearchUIImage* _selectedImage;

}

@property (nonatomic,retain) SearchUIImage * unselectedImage;              //@synthesize unselectedImage=_unselectedImage - In the implementation block
@property (nonatomic,retain) SearchUIImage * selectedImage;                //@synthesize selectedImage=_selectedImage - In the implementation block
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setSelectedImage:(SearchUIImage *)arg1 ;
-(SearchUIImage *)unselectedImage;
-(SearchUIImage *)selectedImage;
-(void)setUnselectedImage:(SearchUIImage *)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
@end

