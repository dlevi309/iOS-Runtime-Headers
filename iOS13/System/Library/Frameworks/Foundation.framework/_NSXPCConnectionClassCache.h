/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)clear;
-(BOOL)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
@end

