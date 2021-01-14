/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol TSPMutableLargeArraySegmentDelegate;
@class NSString, NSMutableArray, NSArray;

@interface TSPAbstractMutableLargeArraySegment : TSPObject <NSFastEnumeration> {

	BOOL _storeOutsideObjectArchive;
	BOOL _shouldDelayArchiving;
	unsigned _delayedArchivingPriority;
	NSString* _packageLocator;
	NSMutableArray* _backingStore;
	unsigned long long _mutations;
	unsigned long long _estimatedByteSize;
	id<TSPMutableLargeArraySegmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TSPMutableLargeArraySegmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) NSMutableArray * mutableArrayWrapper; 
@property (assign,nonatomic) BOOL storeOutsideObjectArchive;                                       //@synthesize storeOutsideObjectArchive=_storeOutsideObjectArchive - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayArchiving;                                            //@synthesize shouldDelayArchiving=_shouldDelayArchiving - In the implementation block
@property (assign,nonatomic) unsigned delayedArchivingPriority; 
@property (assign,nonatomic) unsigned long long estimatedByteSize; 
@property (nonatomic,copy) NSString * packageLocator;                                              //@synthesize packageLocator=_packageLocator - In the implementation block
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS174*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id<TSPMutableLargeArraySegmentDelegate>)delegate;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)estimatedByteSize;
-(unsigned long long)count;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)commonInit;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSArray *)allObjects;
-(void)setDelegate:(id<TSPMutableLargeArraySegmentDelegate>)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(NSString *)packageLocator;
-(BOOL)storeOutsideObjectArchive;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)addObject:(id)arg1 willModify:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 context:(id)arg2 ;
-(unsigned long long)estimatedByteSizeOfElement:(id)arg1 ;
-(id)initWithArray:(id)arg1 delegate:(id)arg2 shouldDelayArchiving:(BOOL)arg3 context:(id)arg4 ;
-(void)setStoreOutsideObjectArchive:(BOOL)arg1 ;
-(void)setDelayedArchivingPriority:(unsigned)arg1 ;
-(void)loadFromLargeArraySegmentMessage:(const LargeArraySegment*)arg1 unarchiver:(id)arg2 ;
-(void)saveToLargeArraySegmentMessage:(LargeArraySegment*)arg1 archiver:(id)arg2 ;
-(void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)arg1 ;
-(void)setShouldDelayArchiving:(BOOL)arg1 ;
-(void)setPackageLocator:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 shouldDelayArchiving:(BOOL)arg2 context:(id)arg3 ;
-(NSMutableArray *)mutableArrayWrapper;
-(id)bisectAtIndex:(unsigned long long)arg1 ;
-(void)setEstimatedByteSize:(unsigned long long)arg1 ;
@end

