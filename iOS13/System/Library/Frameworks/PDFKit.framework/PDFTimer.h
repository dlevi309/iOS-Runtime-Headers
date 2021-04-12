/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@class PDFTimerPrivate;

@interface PDFTimer : NSObject {

	PDFTimerPrivate* _private;

}
-(void)dealloc;
-(void)cancel;
-(void)_execute;
-(void)update;
-(id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3 ;
-(id)initWithSelector:(SEL)arg1 forTarget:(id)arg2 ;
-(BOOL)isUpdateQueued;
@end

