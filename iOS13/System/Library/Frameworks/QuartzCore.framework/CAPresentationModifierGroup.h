/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@interface CAPresentationModifierGroup : NSObject {

	void* _shmem;
	unsigned long long _capacity;
	unsigned long long _count;

}

@property (readonly) unsigned long long capacity; 
@property (readonly) unsigned long long count; 
+(id)groupWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(Shmem*)shmem;
-(unsigned long long)capacity;
-(void)flush;
-(unsigned long long)nextSlot;
-(void)resetBitMask;
-(void)markWritten:(unsigned long long)arg1 ;
@end

