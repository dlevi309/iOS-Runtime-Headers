/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMutableDictionary, NSObject;

@interface NTKCubicSplineMatrixCache : NSObject {

	NSMutableDictionary* _openMatrixCache;
	NSMutableDictionary* _closedMatrixCache;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
+(id)sharedInstance;
-(id)init;
-(SCD_Struct_NT10*)splineMatrixWithDimension:(int)arg1 cache:(id)arg2 matrixGenerator:(/*^block*/id)arg3 ;
-(SCD_Struct_NT10*)openSplineMatrixWithDimension:(int)arg1 ;
-(SCD_Struct_NT10*)closedSplineMatrixWithDimension:(int)arg1 ;
@end

