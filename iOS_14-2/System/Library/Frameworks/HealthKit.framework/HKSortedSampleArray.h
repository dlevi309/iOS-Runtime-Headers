/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary, NSSortDescriptor;

@interface HKSortedSampleArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _samples;
	NSMutableDictionary* _samplesByUUID;
	NSSortDescriptor* _sortDescriptor;

}

@property (nonatomic,retain) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HK5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(long long)count;
-(id)description;
-(id)allSamples;
-(void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1 ;
-(BOOL)removeSampleAtIndex:(long long)arg1 ;
-(BOOL)removeSample:(id)arg1 ;
-(BOOL)insertSamples:(id)arg1 ;
-(id)sampleAtIndex:(long long)arg1 ;
-(BOOL)removeSamplesWithUUIDs:(id)arg1 ;
-(void)removeAllSamples;
-(id)sampleEnumerator;
-(id)reverseSampleEnumerator;
-(NSSortDescriptor *)sortDescriptor;
-(void)setSortDescriptor:(NSSortDescriptor *)arg1 ;
@end

