/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)imageSize;
-(id)init;
-(double)scale;
-(id)initWithImageSize:(double)arg1 scale:(double)arg2 ;
-(ICAppearanceInfo *)appearanceInfo;
-(void)setAppearanceInfo:(ICAppearanceInfo *)arg1 ;
-(id)initWithImageSize:(double)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 ;
-(id)deviceInfoFromAddingAppearanceInfo:(id)arg1 ;
-(id)description;
-(void)setScale:(double)arg1 ;
-(unsigned long long)hash;
-(void)setImageSize:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

