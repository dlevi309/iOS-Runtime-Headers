/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVRunLoopConditionRunLoopState : NSObject {

	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _signalSource;
	BOOL _signaled;

}

@property (nonatomic,readonly) CFRunLoopRef runLoop;                       //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef signalSource;              //@synthesize signalSource=_signalSource - In the implementation block
@property (assign,nonatomic) BOOL signaled;                                //@synthesize signaled=_signaled - In the implementation block
+(id)runLoopStateWithRunLoop:(CFRunLoopRef)arg1 ;
-(void)dealloc;
-(CFRunLoopRef)runLoop;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(CFRunLoopSourceRef)signalSource;
-(void)setSignalSource:(CFRunLoopSourceRef)arg1 ;
-(BOOL)signaled;
-(void)setSignaled:(BOOL)arg1 ;
@end

