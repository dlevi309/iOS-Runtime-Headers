/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)addObject:(id)arg1 ;
+(void)showPools;
+(void)releaseAllPools;
+(unsigned long long)autoreleasedObjectCount;
+(unsigned long long)topAutoreleasePoolCount;
+(BOOL)autoreleasePoolExists;
+(void)enableRelease:(BOOL)arg1 ;
+(void)enableFreedObjectCheck:(BOOL)arg1 ;
+(unsigned long long)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned long long)arg1 ;
+(unsigned long long)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned long long)arg1 ;
+(unsigned long long)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)drain;
@end

