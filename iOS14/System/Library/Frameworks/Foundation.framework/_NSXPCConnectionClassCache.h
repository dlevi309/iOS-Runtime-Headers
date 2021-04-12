/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableSet* _cache;

}
-(id)init;
-(void)dealloc;
@end

