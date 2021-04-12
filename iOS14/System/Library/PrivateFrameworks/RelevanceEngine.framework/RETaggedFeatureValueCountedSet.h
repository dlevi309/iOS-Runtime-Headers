/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying> {

	CFBagRef _bag;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(void)removeFeatureValue:(unsigned long long)arg1 ;
-(unsigned long long)countForFeatureValue:(unsigned long long)arg1 ;
-(BOOL)containsFeatureValue:(unsigned long long)arg1 ;
@end

