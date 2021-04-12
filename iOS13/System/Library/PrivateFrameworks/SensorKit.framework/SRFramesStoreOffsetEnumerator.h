/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class SRFrameStore;

@interface SRFramesStoreOffsetEnumerator : NSObject <NSFastEnumeration> {

	SRFrameStore* _framesStore;
	unsigned long long _offset;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SR3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithFramesStore:(id)arg1 offset:(unsigned long long)arg2 ;
@end

