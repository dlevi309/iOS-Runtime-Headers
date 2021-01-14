/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface ARParentImageSensorSettings : NSObject <NSCopying> {

	BOOL _audioCaptureEnabled;
	BOOL _allowCameraInMultipleForegroundAppLayout;
	NSArray* _settings;

}

@property (assign,nonatomic) BOOL audioCaptureEnabled;                                   //@synthesize audioCaptureEnabled=_audioCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL allowCameraInMultipleForegroundAppLayout;              //@synthesize allowCameraInMultipleForegroundAppLayout=_allowCameraInMultipleForegroundAppLayout - In the implementation block
@property (nonatomic,copy) NSArray * settings;                                           //@synthesize settings=_settings - In the implementation block
-(id)init;
-(void)setSettings:(NSArray *)arg1 ;
-(NSArray *)settings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)allowCameraInMultipleForegroundAppLayout;
-(BOOL)audioCaptureEnabled;
-(void)setAudioCaptureEnabled:(BOOL)arg1 ;
-(void)setAllowCameraInMultipleForegroundAppLayout:(BOOL)arg1 ;
@end

