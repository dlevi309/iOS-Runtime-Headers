/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NFTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;

}
-(void)dealloc;
-(void)stopTimer;
-(void)startTimer:(double)arg1 ;
-(void)startTimer:(double)arg1 leeway:(double)arg2 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

