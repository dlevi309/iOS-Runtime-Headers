/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_dispatch_semaphore;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL;

@interface NSExtensionURLResult : NSObject {

	NSObject*<OS_dispatch_semaphore> _sema;
	NSURL* _url;
	os_unfair_lock_s _lock;

}

@property (setter=setURL:,copy) NSURL * url; 
-(id)init;
-(void)dealloc;
-(void)signal;
-(NSURL *)url;
-(id)copiedURL;
-(void)setURL:(id)arg1 ;
-(BOOL)wait:(double)arg1 ;
@end

