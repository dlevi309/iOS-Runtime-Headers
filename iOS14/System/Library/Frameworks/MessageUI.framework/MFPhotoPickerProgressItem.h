/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)progress;
-(id)description;
-(int)imageRequestID;
-(void)setImageRequestID:(int)arg1 ;
-(AVAssetExportSession *)exportSession;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(void)setProgress:(double)arg1 ;
@end

