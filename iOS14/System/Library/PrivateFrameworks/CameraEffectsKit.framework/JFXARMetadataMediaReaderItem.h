/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXARMetadata;

@interface JFXARMetadataMediaReaderItem : NSObject {

	JFXARMetadata* _arMetadata;
	SCD_Struct_JF4 _timeRange;

}

@property (nonatomic,readonly) JFXARMetadata * arMetadata;              //@synthesize arMetadata=_arMetadata - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 timeRange;                //@synthesize timeRange=_timeRange - In the implementation block
-(SCD_Struct_JF4)timeRange;
-(JFXARMetadata *)arMetadata;
-(id)initWithARMetadata:(id)arg1 timeRange:(SCD_Struct_JF4)arg2 ;
@end

