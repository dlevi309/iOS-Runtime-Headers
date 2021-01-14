/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface ATLTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;
	/*^block*/id _block;
	double _delay;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
@end

