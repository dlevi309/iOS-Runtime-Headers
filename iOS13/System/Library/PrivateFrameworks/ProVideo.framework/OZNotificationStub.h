/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSTimer;

@interface OZNotificationStub : NSObject {

	NSTimer* _pTimer;
	OZDocument* _pDocument;

}
-(void)dealloc;
-(void)fire;
-(void)createTimer;
-(void)releaseTimer;
-(id)initWithOZDocument:(OZDocument*)arg1 useTimer:(BOOL)arg2 ;
-(void)processNotifications:(id)arg1 ;
@end

