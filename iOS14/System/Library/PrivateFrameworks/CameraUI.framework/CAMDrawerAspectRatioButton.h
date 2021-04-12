/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)updateImage;
-(id)imageNameForCurrentState;
-(long long)aspectRatio;
-(void)setAspectRatio:(long long)arg1 ;
-(long long)controlType;
-(void)didSelectMenuItem:(id)arg1 ;
-(id)hudItemForMenuHeader;
-(id)hudItemForMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
-(id)_titleForAspectRatio:(long long)arg1 ;
-(NSMutableDictionary *)_imagesByText;
-(id)_imageForAspectRatio:(long long)arg1 ;
@end

