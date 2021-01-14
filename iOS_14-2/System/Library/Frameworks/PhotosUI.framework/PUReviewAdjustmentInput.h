/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class UIImage, NSData, NSURL;

@interface PUReviewAdjustmentInput : NSObject {

	UIImage* _currentPreviewImage;
	NSData* _knownAdjustmentData;
	long long _adjustmentBaseVersion;
	NSURL* _baseImageFileURL;
	NSURL* _baseVideoFileURL;

}

@property (setter=_setCurrentPreviewImage:,nonatomic,retain) UIImage * currentPreviewImage;              //@synthesize currentPreviewImage=_currentPreviewImage - In the implementation block
@property (setter=_setKnownAdjustmentData:,nonatomic,retain) NSData * knownAdjustmentData;               //@synthesize knownAdjustmentData=_knownAdjustmentData - In the implementation block
@property (assign,setter=_setBaseImageVersion:,nonatomic) long long adjustmentBaseVersion;               //@synthesize adjustmentBaseVersion=_adjustmentBaseVersion - In the implementation block
@property (assign,setter=_setBaseImageFileURL:,nonatomic) NSURL * baseImageFileURL;                      //@synthesize baseImageFileURL=_baseImageFileURL - In the implementation block
@property (assign,setter=_setBaseVideoFileURL:,nonatomic) NSURL * baseVideoFileURL;                      //@synthesize baseVideoFileURL=_baseVideoFileURL - In the implementation block
-(long long)adjustmentBaseVersion;
-(void)_setCurrentPreviewImage:(id)arg1 ;
-(void)_setBaseImageVersion:(long long)arg1 ;
-(void)_setKnownAdjustmentData:(id)arg1 ;
-(void)_setBaseImageFileURL:(id)arg1 ;
-(void)_setBaseVideoFileURL:(id)arg1 ;
-(UIImage *)currentPreviewImage;
-(NSURL *)baseVideoFileURL;
-(NSURL *)baseImageFileURL;
-(NSData *)knownAdjustmentData;
@end

