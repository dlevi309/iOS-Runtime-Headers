/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class AVAssetExportSession;

@interface MFPhotoPickerProgressItem : NSObject {

	int _imageRequestID;
	double _progress;
	AVAssetExportSession* _exportSession;

}

@property (assign,nonatomic) double progress;                                   //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) int imageRequestID;                                //@synthesize imageRequestID=_imageRequestID - In the implementation block
@property (nonatomic,retain) AVAssetExportSession * exportSession;              //@synthesize exportSession=_exportSession - In the implementation block
-(id)description;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)setImageRequestID:(int)arg1 ;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(int)imageRequestID;
-(AVAssetExportSession *)exportSession;
@end

