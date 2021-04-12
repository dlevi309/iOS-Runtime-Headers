/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying> {

	CFBagRef _bag;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(void)removeFeatureValue:(unsigned long long)arg1 ;
-(unsigned long long)countForFeatureValue:(unsigned long long)arg1 ;
-(BOOL)containsFeatureValue:(unsigned long long)arg1 ;
@end

