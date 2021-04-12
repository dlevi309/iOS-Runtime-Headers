/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSDate, NSDictionary, UIImage, NSURL;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {

	BOOL _expectingPairedVideo;
	NSString* _persistenceUUID;
	NSDate* _captureDate;
	NSDictionary* _metadata;
	NSString* _burstIdentifier;
	unsigned long long _burstRepresentedCount;
	UIImage* _imageWellImage;
	CGSize _finalExpectedPixelSize;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                                      //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long burstRepresentedCount;                             //@synthesize burstRepresentedCount=_burstRepresentedCount - In the implementation block
@property (nonatomic,readonly) UIImage * imageWellImage;                                             //@synthesize imageWellImage=_imageWellImage - In the implementation block
@property (nonatomic,readonly) BOOL flashFired; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo;              //@synthesize expectingPairedVideo=_expectingPairedVideo - In the implementation block
@property (nonatomic,readonly) CGSize finalExpectedPixelSize;                                        //@synthesize finalExpectedPixelSize=_finalExpectedPixelSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) SCD_Struct_CA7 duration; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA7 irisStillDisplayTime; 
-(NSString *)description;
-(NSString *)uuid;
-(SCD_Struct_CA7)duration;
-(NSDictionary *)metadata;
-(unsigned long long)mediaType;
-(UIImage *)placeholderImage;
-(NSDate *)captureDate;
-(NSString *)burstIdentifier;
-(BOOL)flashFired;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)numberOfRepresentedAssets;
-(NSURL *)persistenceURL;
-(CGSize)finalExpectedPixelSize;
-(BOOL)isExpectingPairedVideo;
-(SCD_Struct_CA7)irisStillDisplayTime;
-(NSString *)persistenceUUID;
-(UIImage *)imageWellImage;
-(NSDictionary *)stillImageMetadata;
-(NSString *)irisStillImageUUID;
-(NSURL *)irisVideoPersistenceURL;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 coordinationInfo:(id)arg8 finalExpectedPixelSize:(CGSize)arg9 expectingPairedVideo:(BOOL)arg10 ;
-(unsigned long long)burstRepresentedCount;
@end

