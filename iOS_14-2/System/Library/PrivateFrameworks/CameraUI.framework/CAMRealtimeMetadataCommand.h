/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand {

	NSArray* __desiredTypes;

}

@property (nonatomic,copy,readonly) NSArray * _desiredTypes;              //@synthesize _desiredTypes=__desiredTypes - In the implementation block
-(NSArray *)_desiredTypes;
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_metadataObjectTypesForRealtimeMetadataTypes:(id)arg1 withAvailableMetadataTypes:(id)arg2 ;
-(id)initWithTypes:(id)arg1 ;
-(id)_metadataObjectTypeForRealtimeMetadataType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

