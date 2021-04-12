/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSTimer;

@interface OZNotificationStub : NSObject {

	NSTimer* _pTimer;
	OZDocument* _pDocument;

}
-(void)fire;
-(void)dealloc;
-(void)createTimer;
-(void)releaseTimer;
-(id)initWithOZDocument:(OZDocument*)arg1 useTimer:(BOOL)arg2 ;
-(void)processNotifications:(id)arg1 ;
@end

