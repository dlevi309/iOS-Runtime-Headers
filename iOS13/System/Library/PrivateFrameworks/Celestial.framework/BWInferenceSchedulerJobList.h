/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMapTable;

@interface BWInferenceSchedulerJobList : NSObject <NSFastEnumeration> {

	unsigned long long _jobCount;
	unsigned long long _mutations;
	SCD_Struct_BW58* _orderedJobs;
	NSMapTable* _jobIndexByProvider;

}

@property (readonly) unsigned long long count; 
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW50*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(SCD_Struct_BW58*)jobAtIndex:(unsigned long long)arg1 ;
@end

