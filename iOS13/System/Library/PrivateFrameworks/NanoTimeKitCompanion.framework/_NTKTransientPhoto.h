/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setOriginalCrop:(CGRect)arg1 ;
-(CGRect)originalCrop;
@end

