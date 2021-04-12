/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface CFXNextRenderedFrameCallback : NSObject {

	/*^block*/id _block;
	SCD_Struct_JT6 _sendAfterRenderTime;

}

@property (nonatomic,readonly) SCD_Struct_JT6 sendAfterRenderTime;              //@synthesize sendAfterRenderTime=_sendAfterRenderTime - In the implementation block
@property (nonatomic,readonly) id block;                                        //@synthesize block=_block - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 sendAfterRenderTime:(SCD_Struct_JT6)arg2 ;
-(SCD_Struct_JT6)sendAfterRenderTime;
@end

