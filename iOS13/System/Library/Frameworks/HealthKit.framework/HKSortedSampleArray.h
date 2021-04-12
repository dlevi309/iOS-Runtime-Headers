/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HK4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSSortDescriptor *)sortDescriptor;
-(void)setSortDescriptor:(NSSortDescriptor *)arg1 ;
-(void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1 ;
-(BOOL)removeSampleAtIndex:(long long)arg1 ;
-(BOOL)removeSample:(id)arg1 ;
-(BOOL)insertSamples:(id)arg1 ;
-(id)sampleAtIndex:(long long)arg1 ;
-(id)allSamples;
-(BOOL)removeSamplesWithUUIDs:(id)arg1 ;
-(void)removeAllSamples;
-(id)sampleEnumerator;
-(id)reverseSampleEnumerator;
@end

