/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDCollection.h>

@class OITSUIntegerKeyDictionary;

@interface EDKeyedCollection : EDCollection {

	OITSUIntegerKeyDictionary* mMap;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectWithKey:(long long)arg1 ;
-(void)insertIntoMap:(id)arg1 ;
-(void)removeFromMap:(id)arg1 ;
-(BOOL)isObjectInMap:(id)arg1 ;
-(BOOL)isOverwritingKeyOK;
@end

