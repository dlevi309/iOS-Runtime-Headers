/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {

	vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short> > >* _vectorStorage;
	NSMutableDictionary* _dictStorage;
	type _vectorInlineStorage;

}
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned short)countForValue:(unsigned short)arg1 ;
-(void)addValue:(unsigned short)arg1 ;
-(void)_convertToDictionaryRepresentation;
-(unsigned long long)uniqueValueCount;
-(void)enumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(void)_vectorEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(void)_dictEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
@end

