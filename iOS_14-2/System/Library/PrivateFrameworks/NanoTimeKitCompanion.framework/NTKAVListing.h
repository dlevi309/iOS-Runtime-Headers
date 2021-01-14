/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class CLKVideo, UIImage;


@protocol NTKAVListing <NSObject>
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
@required
-(CLKVideo *)video;
-(UIImage *)image;
-(BOOL)snapshotDiffers:(id)arg1;
-(void)discardAssets;

@end

