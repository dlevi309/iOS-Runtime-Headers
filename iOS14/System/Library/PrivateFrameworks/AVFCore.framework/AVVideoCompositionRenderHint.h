/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVVideoCompositionRenderHintInternal;

@interface AVVideoCompositionRenderHint : NSObject {

	AVVideoCompositionRenderHintInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_AV6 startCompositionTime; 
@property (nonatomic,readonly) SCD_Struct_AV6 endCompositionTime; 
-(id)initWithStartCompositionTime:(SCD_Struct_AV6)arg1 endCompositionTime:(SCD_Struct_AV6)arg2 subsequentStartCompositionTime:(SCD_Struct_AV6)arg3 subsequentEndCompositionTime:(SCD_Struct_AV6)arg4 ;
-(SCD_Struct_AV6)endCompositionTime;
-(SCD_Struct_AV6)startCompositionTime;
-(SCD_Struct_AV6)subsequentStartCompositionTime;
-(SCD_Struct_AV6)subsequentEndCompositionTime;
-(void)dealloc;
@end

