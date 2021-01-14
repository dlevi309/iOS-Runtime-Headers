/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)copiedURL;
-(id)init;
-(void)setURL:(id)arg1 ;
-(NSURL *)url;
-(BOOL)wait:(double)arg1 ;
-(void)signal;
-(void)dealloc;
@end

