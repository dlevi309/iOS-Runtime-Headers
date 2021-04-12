/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIView.h>

@class PXHUDView, NSURL;

@interface PUPhotoSceneHUD : UIView {

	PXHUDView* _hudView;
	NSURL* _mdataURL;

}

@property (nonatomic,readonly) PXHUDView * hudView;              //@synthesize hudView=_hudView - In the implementation block
@property (nonatomic,readonly) NSURL * mdataURL;                 //@synthesize mdataURL=_mdataURL - In the implementation block
-(NSURL *)mdataURL;
-(PXHUDView *)hudView;
-(void)update;
-(id)initWithPhoto:(id)arg1 ;
@end

