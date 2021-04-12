/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 ;
-(UIImage *)playImage;
-(UIImage *)pauseImage;
-(UIImage *)stopImage;
-(void)preloadImages;
@end

