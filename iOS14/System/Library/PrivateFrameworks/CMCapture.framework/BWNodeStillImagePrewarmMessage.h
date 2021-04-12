/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWNodeMessage.h>

@class BWStillImageSettings;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {

	BWStillImageSettings* _stillImageSettings;

}

@property (readonly) BWStillImageSettings * stillImageSettings; 
+(id)newMessageWithStillImageSettings:(id)arg1 ;
-(id)_initWithStillImageSettings:(id)arg1 ;
-(BWStillImageSettings *)stillImageSettings;
-(void)dealloc;
@end

