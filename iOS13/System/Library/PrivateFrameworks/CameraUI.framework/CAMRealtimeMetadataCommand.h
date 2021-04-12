/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand {

	NSArray* __desiredTypes;

}

@property (nonatomic,copy,readonly) NSArray * _desiredTypes;              //@synthesize _desiredTypes=__desiredTypes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithTypes:(id)arg1 ;
-(NSArray *)_desiredTypes;
-(id)_metadataObjectTypesForRealtimeMetadataTypes:(id)arg1 withAvailableMetadataTypes:(id)arg2 ;
-(id)_metadataObjectTypeForRealtimeMetadataType:(long long)arg1 ;
@end

