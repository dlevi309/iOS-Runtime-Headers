/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REClassLoader.h>

@class NSArray;

@interface REObjectClassLoader : REClassLoader {

	NSArray* _objects;

}
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithObjects:(id)arg1 configuration:(id)arg2 ;
-(void)_enumerateClassesWithBlock:(/*^block*/id)arg1 ;
@end

