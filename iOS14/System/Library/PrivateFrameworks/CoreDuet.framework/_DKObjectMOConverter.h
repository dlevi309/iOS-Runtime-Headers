/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject {

	BOOL _readMetadata;
	BOOL _deduplicateValues;
	NSArray* _excludedMetadataKeys;
	NSCache* _cache;

}

@property (assign) BOOL readMetadata;                           //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) BOOL deduplicateValues;                      //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
@property (retain) NSArray * excludedMetadataKeys;              //@synthesize excludedMetadataKeys=_excludedMetadataKeys - In the implementation block
-(void)setReadMetadata:(BOOL)arg1 ;
-(void)setExcludedMetadataKeys:(NSArray *)arg1 ;
-(id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)init;
-(id)objectsFromManagedObjects:(id)arg1 ;
-(id)dataIntervalsFromManagedObjects:(id)arg1 ;
-(BOOL)deduplicateValues;
-(void)setDeduplicateValues:(BOOL)arg1 ;
-(BOOL)readMetadata;
-(NSArray *)excludedMetadataKeys;
@end

