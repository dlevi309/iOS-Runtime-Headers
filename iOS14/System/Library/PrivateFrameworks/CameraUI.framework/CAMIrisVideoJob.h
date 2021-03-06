/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSError;

@interface CAMIrisVideoJob : NSObject <NSSecureCoding> {

	NSURL* _videoURL;
	NSString* _stillImagePersistenceUUID;
	NSString* _videoPersistenceUUID;
	NSString* _irisIdentifier;
	long long _captureDevice;
	long long _captureOrientation;
	double _captureTime;
	NSError* _captureError;
	NSString* _filterName;
	NSURL* _filteredVideoURL;
	long long _persistenceOptions;
	long long _temporaryPersistenceOptions;
	NSString* _bundleIdentifier;
	SCD_Struct_CA7 _duration;
	SCD_Struct_CA7 _stillImageDisplayTime;

}

@property (nonatomic,readonly) NSURL * videoURL;                                  //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) NSString * stillImagePersistenceUUID;              //@synthesize stillImagePersistenceUUID=_stillImagePersistenceUUID - In the implementation block
@property (nonatomic,readonly) NSString * videoPersistenceUUID;                   //@synthesize videoPersistenceUUID=_videoPersistenceUUID - In the implementation block
@property (nonatomic,readonly) NSString * irisIdentifier;                         //@synthesize irisIdentifier=_irisIdentifier - In the implementation block
@property (nonatomic,readonly) long long captureDevice;                           //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) long long captureOrientation;                      //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 stillImageDisplayTime;              //@synthesize stillImageDisplayTime=_stillImageDisplayTime - In the implementation block
@property (nonatomic,readonly) double captureTime;                                //@synthesize captureTime=_captureTime - In the implementation block
@property (nonatomic,readonly) NSError * captureError;                            //@synthesize captureError=_captureError - In the implementation block
@property (nonatomic,readonly) NSString * filterName;                             //@synthesize filterName=_filterName - In the implementation block
@property (nonatomic,readonly) NSURL * filteredVideoURL;                          //@synthesize filteredVideoURL=_filteredVideoURL - In the implementation block
@property (assign,nonatomic) long long persistenceOptions;                        //@synthesize persistenceOptions=_persistenceOptions - In the implementation block
@property (assign,nonatomic) long long temporaryPersistenceOptions;               //@synthesize temporaryPersistenceOptions=_temporaryPersistenceOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isCTMVideo,nonatomic,readonly) BOOL CTMVideo; 
+(BOOL)supportsSecureCoding;
-(long long)captureDevice;
-(void)setTemporaryPersistenceOptions:(long long)arg1 ;
-(BOOL)isCTMVideo;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)irisIdentifier;
-(NSString *)filterName;
-(double)captureTime;
-(id)description;
-(NSError *)captureError;
-(long long)captureOrientation;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)videoURL;
-(void)setPersistenceOptions:(long long)arg1 ;
-(SCD_Struct_CA7)duration;
-(NSString *)videoPersistenceUUID;
-(NSString *)stillImagePersistenceUUID;
-(id)initWithVideoURL:(id)arg1 stillImagePersistenceUUID:(id)arg2 videoPersistenceUUID:(id)arg3 irisIdentifier:(id)arg4 captureDevice:(long long)arg5 captureOrientation:(long long)arg6 duration:(SCD_Struct_CA7)arg7 stillImageDisplayTime:(SCD_Struct_CA7)arg8 captureTime:(double)arg9 captureError:(id)arg10 filterName:(id)arg11 filteredVideoURL:(id)arg12 persistenceOptions:(long long)arg13 temporaryPersistenceOptions:(long long)arg14 bundleIdentifier:(id)arg15 ;
-(SCD_Struct_CA7)stillImageDisplayTime;
-(NSURL *)filteredVideoURL;
-(long long)persistenceOptions;
-(long long)temporaryPersistenceOptions;
@end

