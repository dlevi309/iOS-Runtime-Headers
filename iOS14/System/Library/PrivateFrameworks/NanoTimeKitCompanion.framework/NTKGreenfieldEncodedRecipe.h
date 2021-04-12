/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSURL, UIImage, NSString;

@interface NTKGreenfieldEncodedRecipe : NSObject {

	NSURL* _watchFaceDataUrl;
	UIImage* _watchFaceImage;
	NSString* _watchFaceName;

}

@property (nonatomic,retain) NSURL * watchFaceDataUrl;              //@synthesize watchFaceDataUrl=_watchFaceDataUrl - In the implementation block
@property (nonatomic,retain) UIImage * watchFaceImage;              //@synthesize watchFaceImage=_watchFaceImage - In the implementation block
@property (nonatomic,retain) NSString * watchFaceName;              //@synthesize watchFaceName=_watchFaceName - In the implementation block
-(UIImage *)watchFaceImage;
-(NSURL *)watchFaceDataUrl;
-(NSString *)watchFaceName;
-(id)initWithWatchFaceDataUrl:(id)arg1 watchFaceImage:(id)arg2 watchFaceName:(id)arg3 ;
-(void)setWatchFaceDataUrl:(NSURL *)arg1 ;
-(void)setWatchFaceImage:(UIImage *)arg1 ;
-(void)setWatchFaceName:(NSString *)arg1 ;
@end

