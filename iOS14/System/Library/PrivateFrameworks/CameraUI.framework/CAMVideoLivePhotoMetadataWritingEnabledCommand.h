/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoLivePhotoMetadataWritingEnabledCommand : CAMCaptureCommand {

	BOOL __livePhotoMetadataWritingEnabled;

}

@property (getter=isLivePhotoMetadataWritingEnabled,nonatomic,readonly) BOOL _livePhotoMetadataWritingEnabled;              //@synthesize _livePhotoMetadataWritingEnabled=__livePhotoMetadataWritingEnabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLivePhotoMetadataWritingEnabled;
-(id)initWithEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

