/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)endDelay;
-(void)dealloc;
-(id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2 ;
-(void)delayRunLoop;
@end

