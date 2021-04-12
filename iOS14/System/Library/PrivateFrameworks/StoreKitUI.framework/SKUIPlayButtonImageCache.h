/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSBundle, NSString, UIImage;

@interface SKUIPlayButtonImageCache : NSObject {

	os_unfair_lock_s _imageLock;
	NSBundle* _bundle;
	NSString* _playImageName;
	UIImage* _playImage;
	NSString* _pauseImageName;
	UIImage* _pauseImage;
	NSString* _stopImageName;
	UIImage* _stopImage;

}

@property (readonly) UIImage * playImage; 
@property (readonly) UIImage * pauseImage; 
@property (readonly) UIImage * stopImage; 
+(id)imageCacheForStyle:(long long)arg1 ;
-(void)preloadImages;
-(id)initWithStyle:(long long)arg1 ;
-(UIImage *)stopImage;
-(UIImage *)playImage;
-(UIImage *)pauseImage;
@end

