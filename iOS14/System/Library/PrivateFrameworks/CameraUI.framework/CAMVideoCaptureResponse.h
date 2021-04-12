/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSURL, NSDate, UIImage, NSDictionary;

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {

	NSString* _persistenceUUID;
	NSURL* _localPersistenceURL;
	NSDate* _captureDate;
	long long _reason;
	double _videoZoomFactor;
	UIImage* _imageWellImage;
	UIImage* _previewImage;
	NSString* _stillPersistenceUUID;
	CGSize _finalExpectedPixelSize;
	SCD_Struct_CA7 _duration;
	SCD_Struct_CA7 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localPersistenceURL;                                     //@synthesize localPersistenceURL=_localPersistenceURL - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long reason;                                                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL stoppedUnexpectedly; 
@property (nonatomic,readonly) double videoZoomFactor;                                               //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) UIImage * imageWellImage;                                             //@synthesize imageWellImage=_imageWellImage - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                               //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) CGSize finalExpectedPixelSize;                                        //@synthesize finalExpectedPixelSize=_finalExpectedPixelSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;                                 //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 stillDisplayTime;                                      //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA7 irisStillDisplayTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)imageWellImage;
-(NSString *)uuid;
-(unsigned long long)mediaType;
-(NSURL *)irisVideoPersistenceURL;
-(NSString *)irisStillImageUUID;
-(double)videoZoomFactor;
-(CGSize)finalExpectedPixelSize;
-(SCD_Struct_CA7)irisStillDisplayTime;
-(NSDate *)captureDate;
-(NSURL *)persistenceURL;
-(NSString *)description;
-(NSString *)burstIdentifier;
-(unsigned long long)mediaSubtypes;
-(long long)reason;
-(unsigned long long)numberOfRepresentedAssets;
-(UIImage *)previewImage;
-(UIImage *)placeholderImage;
-(NSString *)persistenceUUID;
-(SCD_Struct_CA7)stillDisplayTime;
-(NSDictionary *)stillImageMetadata;
-(SCD_Struct_CA7)duration;
-(BOOL)isExpectingPairedVideo;
-(BOOL)stoppedUnexpectedly;
-(NSURL *)localPersistenceURL;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(SCD_Struct_CA7)arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(SCD_Struct_CA7)arg7 reason:(long long)arg8 videoZoomFactor:(double)arg9 finalExpectedPixelSize:(CGSize)arg10 imageWellImage:(id)arg11 previewImage:(id)arg12 coordinationInfo:(id)arg13 ;
-(NSString *)stillPersistenceUUID;
@end

