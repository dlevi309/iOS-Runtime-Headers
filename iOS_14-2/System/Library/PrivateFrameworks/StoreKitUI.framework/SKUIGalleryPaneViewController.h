/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@class SKUIMediaComponent, SKUIEmbeddedMediaView;

@interface SKUIGalleryPaneViewController : UIViewController {

	SKUIMediaComponent* _component;
	long long _galleryIndex;

}

@property (nonatomic,readonly) SKUIMediaComponent * component;                 //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) long long galleryIndex;                         //@synthesize galleryIndex=_galleryIndex - In the implementation block
@property (nonatomic,readonly) SKUIEmbeddedMediaView * mediaView; 
-(SKUIMediaComponent *)component;
-(SKUIEmbeddedMediaView *)mediaView;
-(long long)galleryIndex;
-(id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2 ;
@end

