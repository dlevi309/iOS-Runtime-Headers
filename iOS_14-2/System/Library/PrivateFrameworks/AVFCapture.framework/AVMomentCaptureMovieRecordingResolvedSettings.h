/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSURL;

@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject {

	long long _uniqueID;
	BOOL _torchEnabled;
	NSURL* _movieURL;
	NSURL* _spatialOverCaptureURL;
	SCD_Struct_AV22 _movieDimensions;

}

@property (readonly) long long uniqueID;                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (getter=isTorchEnabled,readonly) BOOL torchEnabled;              //@synthesize torchEnabled=_torchEnabled - In the implementation block
@property (readonly) NSURL * movieURL;                                     //@synthesize movieURL=_movieURL - In the implementation block
@property (readonly) NSURL * spatialOverCaptureURL;                        //@synthesize spatialOverCaptureURL=_spatialOverCaptureURL - In the implementation block
@property (readonly) SCD_Struct_AV22 movieDimensions;                      //@synthesize movieDimensions=_movieDimensions - In the implementation block
+(id)movieRecordingResolvedSettingsWithUniqueID:(long long)arg1 torchEnabled:(BOOL)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(SCD_Struct_AV22)arg5 ;
-(long long)uniqueID;
-(id)debugDescription;
-(id)description;
-(NSURL *)movieURL;
-(NSURL *)spatialOverCaptureURL;
-(id)_initWithUniqueID:(long long)arg1 torchEnabled:(BOOL)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(SCD_Struct_AV22)arg5 ;
-(BOOL)isTorchEnabled;
-(SCD_Struct_AV22)movieDimensions;
-(void)dealloc;
@end

