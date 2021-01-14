/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class UIImage;

@interface _NTKTransientPhoto : NSObject {

	UIImage* _image;
	CGRect _originalCrop;

}

@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect originalCrop;              //@synthesize originalCrop=_originalCrop - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setOriginalCrop:(CGRect)arg1 ;
-(CGRect)originalCrop;
@end

