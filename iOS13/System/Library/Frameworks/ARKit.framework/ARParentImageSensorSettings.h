/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)settings;
-(void)setSettings:(NSArray *)arg1 ;
-(BOOL)allowCameraInMultipleForegroundAppLayout;
-(BOOL)audioCaptureEnabled;
-(void)setAudioCaptureEnabled:(BOOL)arg1 ;
-(void)setAllowCameraInMultipleForegroundAppLayout:(BOOL)arg1 ;
@end

