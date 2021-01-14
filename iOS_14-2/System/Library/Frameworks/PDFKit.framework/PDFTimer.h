/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@class PDFTimerPrivate;

@interface PDFTimer : NSObject {

	PDFTimerPrivate* _private;

}
-(void)update;
-(void)_execute;
-(void)cancel;
-(void)dealloc;
-(id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3 ;
-(id)initWithSelector:(SEL)arg1 forTarget:(id)arg2 ;
-(BOOL)isUpdateQueued;
@end

