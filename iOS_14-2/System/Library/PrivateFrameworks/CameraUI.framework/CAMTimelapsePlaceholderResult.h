/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSDate, NSURL, UIImage, NSDictionary;

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible> {

	unsigned short _sessionIdentifier;
	NSString* _assetUUID;
	NSDate* _creationDate;
	long long _captureOrientation;
	long long _captureDevice;
	double _timelapseDuration;
	void* _previewImageSurface;
	CGSize _videoDimensions;

}

@property (nonatomic,copy,readonly) NSString * assetUUID;                                            //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;                                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) long long captureOrientation;                                         //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (nonatomic,readonly) long long captureDevice;                                              //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) CGSize videoDimensions;                                               //@synthesize videoDimensions=_videoDimensions - In the implementation block
@property (nonatomic,readonly) double timelapseDuration;                                             //@synthesize timelapseDuration=_timelapseDuration - In the implementation block
@property (nonatomic,readonly) void* previewImageSurface;                                            //@synthesize previewImageSurface=_previewImageSurface - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,readonly) CGSize finalExpectedPixelSize; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) SCD_Struct_CA7 duration; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA7 irisStillDisplayTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)captureDevice;
-(NSString *)uuid;
-(unsigned long long)mediaType;
-(NSURL *)irisVideoPersistenceURL;
-(NSString *)irisStillImageUUID;
-(CGSize)finalExpectedPixelSize;
-(SCD_Struct_CA7)irisStillDisplayTime;
-(NSDate *)captureDate;
-(CGSize)videoDimensions;
-(unsigned short)sessionIdentifier;
-(NSURL *)persistenceURL;
-(NSString *)assetUUID;
-(NSString *)burstIdentifier;
-(NSDate *)creationDate;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)numberOfRepresentedAssets;
-(long long)captureOrientation;
-(UIImage *)placeholderImage;
-(NSDictionary *)stillImageMetadata;
-(SCD_Struct_CA7)duration;
-(BOOL)isExpectingPairedVideo;
-(void)dealloc;
-(double)timelapseDuration;
-(void*)previewImageSurface;
-(id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 captureDevice:(long long)arg5 videoDimensions:(CGSize)arg6 duration:(double)arg7 previewImageSurface:(void*)arg8 ;
@end

