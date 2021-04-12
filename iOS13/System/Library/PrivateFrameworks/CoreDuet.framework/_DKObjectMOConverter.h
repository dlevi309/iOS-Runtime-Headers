/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject {

	BOOL _readMetadata;
	BOOL _deduplicateValues;
	NSArray* _excludedMetadataKeys;
	NSCache* _cache;

}

@property (retain) NSCache * cache;                             //@synthesize cache=_cache - In the implementation block
@property (assign) BOOL readMetadata;                           //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) BOOL deduplicateValues;                      //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
@property (retain) NSArray * excludedMetadataKeys;              //@synthesize excludedMetadataKeys=_excludedMetadataKeys - In the implementation block
-(id)init;
-(void)setReadMetadata:(BOOL)arg1 ;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(void)setDeduplicateValues:(BOOL)arg1 ;
-(id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)objectsFromManagedObjects:(id)arg1 ;
-(BOOL)readMetadata;
-(NSArray *)excludedMetadataKeys;
-(BOOL)copyObject:(id)arg1 intoManagedObject:(id)arg2 ;
-(id)dataIntervalsFromManagedObjects:(id)arg1 ;
-(BOOL)deduplicateValues;
-(void)setExcludedMetadataKeys:(NSArray *)arg1 ;
@end

