/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewControllerSpec.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutDynamicAdaptable.h>

@class NSString;

@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable> {

	long long _layoutOrientation;

}

@property (nonatomic,readonly) double standardBottomBarHeight; 
@property (nonatomic,readonly) double standardSideBarWidth; 
@property (nonatomic,readonly) BOOL isiPadLayout; 
@property (assign,nonatomic) long long layoutOrientation;                   //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toolPickerSelectionColor;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)standardBottomBarHeight;
-(double)standardSideBarWidth;
-(BOOL)isiPadLayout;
-(void)setLayoutOrientation:(long long)arg1 ;
@end

