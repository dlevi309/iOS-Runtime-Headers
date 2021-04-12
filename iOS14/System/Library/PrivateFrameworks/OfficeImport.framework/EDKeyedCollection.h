/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDCollection.h>

@class OITSUIntegerKeyDictionary;

@interface EDKeyedCollection : EDCollection {

	OITSUIntegerKeyDictionary* mMap;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectWithKey:(long long)arg1 ;
-(void)insertIntoMap:(id)arg1 ;
-(void)removeFromMap:(id)arg1 ;
-(BOOL)isObjectInMap:(id)arg1 ;
-(BOOL)isOverwritingKeyOK;
@end

