/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class CLKVideo, UIImage;


@protocol NTKAVListing <NSObject>
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
@required
-(UIImage *)image;
-(CLKVideo *)video;
-(BOOL)snapshotDiffers:(id)arg1;
-(void)discardAssets;

@end

