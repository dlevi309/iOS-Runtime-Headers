/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMPersistenceResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSURL, NSDate, UIImage, NSDictionary;

@interface CAMVideoPersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible> {

	NSString* _stillPersistenceUUID;
	SCD_Struct_CA7 _duration;
	SCD_Struct_CA7 _stillDisplayTime;

}

@property (nonatomic,readonly) SCD_Struct_CA7 duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;                                 //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 stillDisplayTime;                                      //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,readonly) CGSize finalExpectedPixelSize; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA7 irisStillDisplayTime; 
-(NSString *)uuid;
-(SCD_Struct_CA7)duration;
-(unsigned long long)mediaType;
-(UIImage *)placeholderImage;
-(NSDate *)captureDate;
-(NSString *)burstIdentifier;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)numberOfRepresentedAssets;
-(SCD_Struct_CA7)stillDisplayTime;
-(CGSize)finalExpectedPixelSize;
-(BOOL)isExpectingPairedVideo;
-(SCD_Struct_CA7)irisStillDisplayTime;
-(NSDictionary *)stillImageMetadata;
-(NSString *)irisStillImageUUID;
-(NSURL *)irisVideoPersistenceURL;
-(NSString *)stillPersistenceUUID;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 finalExpectedPixelSize:(CGSize)arg6 duration:(SCD_Struct_CA7)arg7 stillPersistenceUUID:(id)arg8 stillDisplayTime:(SCD_Struct_CA7)arg9 coordinationInfo:(id)arg10 ;
@end

