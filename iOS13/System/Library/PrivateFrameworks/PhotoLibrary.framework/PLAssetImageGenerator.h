/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject {

	BOOL _inUse;
	AVAssetImageGenerator* _imageGenerator;

}

@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (assign,nonatomic) BOOL inUse;                                          //@synthesize inUse=_inUse - In the implementation block
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)inUse;
-(AVAssetImageGenerator *)imageGenerator;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
@end

