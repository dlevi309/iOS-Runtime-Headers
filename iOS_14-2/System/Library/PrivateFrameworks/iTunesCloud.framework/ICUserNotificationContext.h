/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICUserNotificationContext : NSObject {

	/*^block*/id _completionHandler;
	CFRunLoopSourceRef _runLoopSourceRef;

}

@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSourceRef;              //@synthesize runLoopSourceRef=_runLoopSourceRef - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)clearRunLoop;
-(CFRunLoopSourceRef)runLoopSourceRef;
-(void)setRunLoopSourceRef:(CFRunLoopSourceRef)arg1 ;
@end

