/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)flush;
-(unsigned long long)capacity;
-(Shmem*)shmem;
-(unsigned long long)count;
-(unsigned long long)nextSlot;
-(void)resetBitMask;
-(void)markWritten:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
@end

