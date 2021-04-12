/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ICAppearanceInfo;

@interface ICPreviewDeviceInfo : NSObject {

	double _imageSize;
	double _scale;
	ICAppearanceInfo* _appearanceInfo;

}

@property (assign,nonatomic) double imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) ICAppearanceInfo * appearanceInfo;              //@synthesize appearanceInfo=_appearanceInfo - In the implementation block
+(id)previewDeviceInfoForPreviewImage:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)imageSize;
-(void)setImageSize:(double)arg1 ;
-(id)initWithImageSize:(double)arg1 scale:(double)arg2 ;
-(void)setAppearanceInfo:(ICAppearanceInfo *)arg1 ;
-(id)initWithImageSize:(double)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 ;
-(ICAppearanceInfo *)appearanceInfo;
-(id)deviceInfoFromAddingAppearanceInfo:(id)arg1 ;
@end

