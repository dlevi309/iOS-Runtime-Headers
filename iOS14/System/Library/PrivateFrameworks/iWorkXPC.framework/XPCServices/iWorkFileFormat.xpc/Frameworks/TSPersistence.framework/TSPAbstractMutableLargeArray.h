/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <TSPersistence/TSPMutableLargeArraySegmentDelegate.h>

@class NSMutableArray, NSString, NSArray;

@interface TSPAbstractMutableLargeArray : TSPObject <NSFastEnumeration, TSPMutableLargeArraySegmentDelegate> {

	unsigned long long _mutations;
	unsigned long long _maxSegmentElementCount;
	unsigned long long _maxSegmentSize;
	NSMutableArray* _segments;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _segmentRanges;
	long long _bisectedSegmentIdentifier;
	unsigned long long _bisectedSegmentIndex;
	unsigned long long _mergingSegmentIndex;
	BOOL _shouldDelayArchiving;
	unsigned _delayedArchivingPriority;
	BOOL _storeOutsideObjectArchive;
	unsigned long long _estimatedByteSize;

}

@property (nonatomic,readonly) NSString * packageLocatorForSegments; 
@property (nonatomic,readonly) BOOL hasDelayedArchivingPriority; 
@property (nonatomic,readonly) BOOL hasMaxSegmentElementCount; 
@property (nonatomic,readonly) BOOL hasMaxSegmentSize; 
@property (assign,nonatomic) BOOL shouldDelayArchiving; 
@property (assign,nonatomic) unsigned delayedArchivingPriority; 
@property (assign,nonatomic) BOOL storeOutsideObjectArchive; 
@property (nonatomic,readonly) BOOL disableSegmentation; 
@property (readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long maxSegmentElementCount; 
@property (assign,nonatomic) unsigned long long maxSegmentSize; 
@property (nonatomic,readonly) unsigned long long segmentCount; 
@property (nonatomic,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) NSMutableArray * mutableArrayWrapper; 
@property (nonatomic,readonly) unsigned long long estimatedByteSize;                 //@synthesize estimatedByteSize=_estimatedByteSize - In the implementation block
+(Class)arraySegmentClass;
-(id)pop;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)push:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS174*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(id)dequeue;
-(unsigned long long)estimatedByteSize;
-(unsigned long long)count;
-(id)peek;
-(id)lastObject;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)firstObject;
-(void)commonInit;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSArray *)allObjects;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(unsigned long long)elementCount;
-(void)enqueue:(id)arg1 ;
-(void)removeAllObjects;
-(void)addRange:(NSRange)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(unsigned long long)segmentCount;
-(id)segmentAtIndex:(unsigned long long)arg1 ;
-(id)initDocumentObjectWithContext:(id)arg1 ;
-(BOOL)storeOutsideObjectArchive;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithArray:(id)arg1 context:(id)arg2 ;
-(void)setStoreOutsideObjectArchive:(BOOL)arg1 ;
-(void)setDelayedArchivingPriority:(unsigned)arg1 ;
-(void)largeArraySegmentDidBisectAtIndex:(unsigned long long)arg1 segments:(id)arg2 ;
-(void)setShouldDelayArchiving:(BOOL)arg1 ;
-(NSMutableArray *)mutableArrayWrapper;
-(void)bisectSegmentIfNeeded:(unsigned long long)arg1 ;
-(id)initWithContext:(id)arg1 shouldDelayArchiving:(BOOL)arg2 delayedArchivingPriority:(unsigned)arg3 storeOutsideObjectArchive:(BOOL)arg4 ;
-(unsigned long long)segmentIndexForElementIndex:(unsigned long long)arg1 firstSegmentIndex:(unsigned long long)arg2 lastSegmentIndex:(unsigned long long)arg3 segmentIndexGuess:(unsigned long long)arg4 ;
-(NSRange)rangeOfSegmentIndex:(unsigned long long)arg1 ;
-(unsigned long long)segmentIndexForElementIndex:(unsigned long long)arg1 segmentIndexGuess:(unsigned long long)arg2 ;
-(id)convertSegmentElementToElement:(id)arg1 ;
-(id)convertElementToSegmentElement:(id)arg1 ;
-(void)setRange:(NSRange)arg1 forSegmentIndex:(unsigned long long)arg2 ;
-(void)updateSegmentRangesAfterIndex:(unsigned long long)arg1 ;
-(void)removeRangeAtSegmentIndex:(unsigned long long)arg1 ;
-(void)mergeSegmentIfNeededAtIndex:(unsigned long long)arg1 ;
-(id)createArraySegment;
-(NSRange)lastRange;
-(void)removeLastRange;
-(BOOL)disableSegmentation;
-(unsigned long long)maxSegmentElementCount;
-(unsigned long long)maxSegmentSize;
-(NSString *)packageLocatorForSegments;
-(void)insertRange:(NSRange)arg1 atSegmentIndex:(unsigned long long)arg2 ;
-(void)setMaxSegmentElementCount:(unsigned long long)arg1 willModify:(BOOL)arg2 ;
-(void)setMaxSegmentSize:(unsigned long long)arg1 willModify:(BOOL)arg2 ;
-(void)loadFromLargeArrayMessage:(const LargeArray*)arg1 unarchiver:(id)arg2 ;
-(void)saveToLargeArrayMessage:(LargeArray*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 shouldDelayArchiving:(BOOL)arg2 storeOutsideObjectArchive:(BOOL)arg3 ;
-(id)segmentRanges;
-(void)setMaxSegmentElementCount:(unsigned long long)arg1 ;
-(void)setMaxSegmentSize:(unsigned long long)arg1 ;
-(BOOL)hasDelayedArchivingPriority;
-(BOOL)hasMaxSegmentElementCount;
-(BOOL)hasMaxSegmentSize;
@end

