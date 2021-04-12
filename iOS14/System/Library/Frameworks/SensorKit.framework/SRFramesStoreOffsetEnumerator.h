/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class SRFrameStore;

@interface SRFramesStoreOffsetEnumerator : NSObject <NSFastEnumeration> {

	SRFrameStore* _framesStore;
	unsigned long long _offset;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SR3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
@end

