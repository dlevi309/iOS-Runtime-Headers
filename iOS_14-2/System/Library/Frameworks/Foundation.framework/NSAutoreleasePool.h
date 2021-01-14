/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(void)resetTotalAutoreleasedObjects;
+(void)enableFreedObjectCheck:(BOOL)arg1 ;
+(void)releaseAllPools;
+(unsigned long long)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)autoreleasePoolExists;
+(void)addObject:(id)arg1 ;
+(void)setPoolCountHighWaterMark:(unsigned long long)arg1 ;
+(unsigned long long)poolCountHighWaterMark;
+(unsigned long long)totalAutoreleasedObjects;
+(unsigned long long)autoreleasedObjectCount;
+(unsigned long long)topAutoreleasePoolCount;
+(void)showPools;
+(void)enableRelease:(BOOL)arg1 ;
-(void)drain;
-(oneway void)release;
-(id)init;
-(id)retain;
-(id)autorelease;
-(void)addObject:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
@end

