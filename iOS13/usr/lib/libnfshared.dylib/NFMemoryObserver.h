/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NFMemoryObserver : NSObject {

	NSObject*<OS_dispatch_source> _source;

}
-(void)stop;
-(void)start;
@end

