/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NFMemoryObserver : NSObject {

	NSObject*<OS_dispatch_source> _source;

}
-(void)start;
-(void)stop;
@end

