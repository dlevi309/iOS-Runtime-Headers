/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebCoreAudioCaptureSourceIOSListener : NSObject {

	CoreAudioCaptureSourceFactoryIOS* _callback;

}
-(void)invalidate;
-(id)initWithCallback:(CoreAudioCaptureSourceFactoryIOS*)arg1 ;
-(void)handleInterruption:(id)arg1 ;
-(void)sessionMediaServicesWereReset:(id)arg1 ;
@end

