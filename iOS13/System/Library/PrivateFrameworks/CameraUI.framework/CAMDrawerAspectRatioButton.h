/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@class NSMutableDictionary;

@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton {

	long long _aspectRatio;
	NSMutableDictionary* __imagesByText;

}

@property (nonatomic,readonly) NSMutableDictionary * _imagesByText;              //@synthesize _imagesByText=__imagesByText - In the implementation block
@property (assign,nonatomic) long long aspectRatio;                              //@synthesize aspectRatio=_aspectRatio - In the implementation block
-(long long)aspectRatio;
-(void)setAspectRatio:(long long)arg1 ;
-(void)updateImage;
-(long long)controlType;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(id)imageNameForCurrentState;
-(void)didSelectMenuItem:(id)arg1 ;
-(id)hudItemForMenuHeader;
-(id)hudItemForMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
-(id)_titleForAspectRatio:(long long)arg1 ;
-(NSMutableDictionary *)_imagesByText;
-(id)_imageForAspectRatio:(long long)arg1 ;
@end

