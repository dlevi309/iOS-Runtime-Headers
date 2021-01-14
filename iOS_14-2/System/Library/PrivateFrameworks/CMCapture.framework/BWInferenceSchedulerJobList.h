/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMapTable;

@interface BWInferenceSchedulerJobList : NSObject <NSFastEnumeration> {

	unsigned long long _jobCount;
	unsigned long long _mutations;
	SCD_Struct_BW117* _orderedJobs;
	NSMapTable* _jobIndexByProvider;

}

@property (readonly) unsigned long long count; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW116*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(SCD_Struct_BW117*)jobAtIndex:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
@end

