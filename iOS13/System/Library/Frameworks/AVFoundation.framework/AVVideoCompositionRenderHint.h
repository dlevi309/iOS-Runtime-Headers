/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVVideoCompositionRenderHintInternal;

@interface AVVideoCompositionRenderHint : NSObject {

	AVVideoCompositionRenderHintInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_AV7 startCompositionTime; 
@property (nonatomic,readonly) SCD_Struct_AV7 endCompositionTime; 
-(void)dealloc;
-(id)initWithStartCompositionTime:(SCD_Struct_AV7)arg1 endCompositionTime:(SCD_Struct_AV7)arg2 subsequentStartCompositionTime:(SCD_Struct_AV7)arg3 subsequentEndCompositionTime:(SCD_Struct_AV7)arg4 ;
-(SCD_Struct_AV7)startCompositionTime;
-(SCD_Struct_AV7)endCompositionTime;
-(SCD_Struct_AV7)subsequentStartCompositionTime;
-(SCD_Struct_AV7)subsequentEndCompositionTime;
@end

