/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {

	vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short> > >* _vectorStorage;
	NSMutableDictionary* _dictStorage;
	type _vectorInlineStorage;

}
-(void)addValue:(unsigned short)arg1 ;
-(id)init;
-(void)_convertToDictionaryRepresentation;
-(void)_vectorEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToU16CountedSet:(id)arg1 ;
-(unsigned short)countForValue:(unsigned short)arg1 ;
-(id)description;
-(id)dictionary;
-(unsigned long long)uniqueValueCount;
-(void)_dictEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

