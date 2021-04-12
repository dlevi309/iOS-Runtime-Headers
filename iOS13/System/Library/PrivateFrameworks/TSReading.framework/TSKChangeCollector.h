/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSKChangeCollector : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)threadCollector;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3 ;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(id)peekCollectedChanges;
@end

