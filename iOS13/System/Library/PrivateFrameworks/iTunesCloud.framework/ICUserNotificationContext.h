/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICUserNotificationContext : NSObject {

	/*^block*/id _completionHandler;
	CFRunLoopSourceRef _runLoopSourceRef;

}

@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSourceRef;              //@synthesize runLoopSourceRef=_runLoopSourceRef - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)clearRunLoop;
-(CFRunLoopSourceRef)runLoopSourceRef;
-(void)setRunLoopSourceRef:(CFRunLoopSourceRef)arg1 ;
@end

