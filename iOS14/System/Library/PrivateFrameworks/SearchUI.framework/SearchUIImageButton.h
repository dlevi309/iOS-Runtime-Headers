/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setUnselectedImage:(SearchUIImage *)arg1 ;
-(SearchUIImage *)selectedImage;
-(SearchUIImage *)unselectedImage;
-(void)setSelectedImage:(SearchUIImage *)arg1 ;
@end

