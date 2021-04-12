/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface IPCircularBufferArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _backingStore;
	unsigned long long _currentIndex;
	unsigned long long _capacity;
	unsigned long long _mutationDetector;
	id _lastObject;

}

@property (nonatomic,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id lastObject; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IP2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)lastObject;
-(NSArray *)allObjects;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

