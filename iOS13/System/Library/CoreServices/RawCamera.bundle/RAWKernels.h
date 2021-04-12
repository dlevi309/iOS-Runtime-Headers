/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/


#import <RawCamera/RawCamera-Structs.h>
@class NSMutableDictionary;

@interface RAWKernels : NSObject {

	NSMutableDictionary* priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)kernelWithName:(id)arg1 ;
+(id)sharedKernels;
+(id)kernelWithName:(id)arg1 group:(id)arg2 ;
-(id)init;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)kernelSourceForGroup:(id)arg1 ;
-(id)loadKernelsForGroup:(id)arg1 ;
-(id)kernelWithName:(id)arg1 group:(id)arg2 ;
@end

