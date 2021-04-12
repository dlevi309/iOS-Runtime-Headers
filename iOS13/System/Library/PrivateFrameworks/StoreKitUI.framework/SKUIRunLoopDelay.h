/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface SKUIRunLoopDelay : NSObject {

	NSString* _mode;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	double _timeout;

}
-(void)dealloc;
-(id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2 ;
-(void)delayRunLoop;
-(void)endDelay;
@end

