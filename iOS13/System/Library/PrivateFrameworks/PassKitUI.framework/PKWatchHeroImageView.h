/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKHeroImageView.h>

@class UIImageView, NSString;

@interface PKWatchHeroImageView : UIView <PKHeroImageView> {

	UIImageView* _watchView;
	UIImageView* _bridgeWallpaperImageView;

}

@property (nonatomic,readonly) BOOL isCompactWatch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)imageSize;
-(BOOL)isCompactWatch;
-(id)_watchDeviceImage;
-(CGSize)_heroWatchImageSize;
-(id)_resizeImage:(id)arg1 toSize:(CGSize)arg2 ;
-(id)_bridgeWallpaperImage;
-(CGSize)_heroBackgroundImageSize;
-(id)_bridgeHeroImage;
@end

