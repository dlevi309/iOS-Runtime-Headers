/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUIProductUberBackgroundInterface.h>

@class IKViewElement, VUIRoomBannerView, NSString;

@interface VUIRoomBannerViewController : UIViewController <VUIProductUberBackgroundInterface> {

	IKViewElement* _viewElement;
	VUIRoomBannerView* _bannerView;

}

@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIRoomBannerView * bannerView;                 //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) BOOL isUberLayoutActive; 
@property (nonatomic,readonly) BOOL disableGradientBelowNavBar; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double topThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(void)setBannerView:(VUIRoomBannerView *)arg1 ;
-(VUIRoomBannerView *)bannerView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)isUberLayoutActive;
-(void)setUberImageOffset:(double)arg1 ;
-(void)setBannerOpacity:(double)arg1 ;
-(BOOL)disableGradientBelowNavBar;
-(double)topThreshold;
-(void)setWhiteBannerOpacity:(double)arg1 ;
@end

