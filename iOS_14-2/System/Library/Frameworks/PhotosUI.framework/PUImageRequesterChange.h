/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUImageRequesterChange : NSObject {

	BOOL _imageDidChange;
	BOOL _imageIsFullQualityDidChange;
	BOOL _fullsizeImageDataDidChange;
	BOOL _fullsizeImageURLDidChange;

}

@property (assign,setter=_setImageDidChange:,nonatomic) BOOL imageDidChange;                                        //@synthesize imageDidChange=_imageDidChange - In the implementation block
@property (assign,setter=_setImageIsFullQualityDidChange:,nonatomic) BOOL imageIsFullQualityDidChange;              //@synthesize imageIsFullQualityDidChange=_imageIsFullQualityDidChange - In the implementation block
@property (assign,setter=_setFullsizeImageDataDidChange:,nonatomic) BOOL fullsizeImageDataDidChange;                //@synthesize fullsizeImageDataDidChange=_fullsizeImageDataDidChange - In the implementation block
@property (assign,setter=_setFullsizeImageURLDidChange:,nonatomic) BOOL fullsizeImageURLDidChange;                  //@synthesize fullsizeImageURLDidChange=_fullsizeImageURLDidChange - In the implementation block
@property (nonatomic,readonly) BOOL changed; 
-(BOOL)imageIsFullQualityDidChange;
-(BOOL)fullsizeImageURLDidChange;
-(BOOL)changed;
-(BOOL)fullsizeImageDataDidChange;
-(BOOL)imageDidChange;
-(void)_setImageDidChange:(BOOL)arg1 ;
-(void)_setFullsizeImageDataDidChange:(BOOL)arg1 ;
-(void)_setImageIsFullQualityDidChange:(BOOL)arg1 ;
-(void)_setFullsizeImageURLDidChange:(BOOL)arg1 ;
@end

