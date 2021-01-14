/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/

#import <IOKitten/IOKObject.h>

@class NSString, NSDictionary;

@interface IOKRegistryEntry : IOKObject

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long entryID; 
@property (nonatomic,copy) NSDictionary * properties; 
+(id)rootEntry;
+(id)registryIteratorForPlane:(id)arg1 withOptions:(unsigned)arg2 error:(id*)arg3 ;
+(id)entryFromPath:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(NSString *)name;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned long long)entryID;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)childIteratorInServicePlaneWithError:(id*)arg1 ;
-(id)parentIteratorInServicePlaneWithError:(id*)arg1 ;
-(id)initWithRegistryEntry:(unsigned)arg1 ;
-(id)registryIteratorForPlane:(id)arg1 withOptions:(unsigned)arg2 error:(id*)arg3 ;
-(id)nameInPlane:(id)arg1 error:(id*)arg2 ;
-(id)locationInPlane:(id)arg1 error:(id*)arg2 ;
-(id)pathInPlane:(id)arg1 ;
-(id)childIteratorInPlane:(id)arg1 error:(id*)arg2 ;
-(id)childIteratorInPlane:(id)arg1 error:(id*)arg2 withEnumerationBlock:(/*^block*/id)arg3 ;
-(id)childInPlane:(id)arg1 error:(id*)arg2 ;
-(id)parentIteratorInPlane:(id)arg1 error:(id*)arg2 ;
-(id)parentIteratorInPlane:(id)arg1 error:(id*)arg2 withEnumerationBlock:(/*^block*/id)arg3 ;
-(id)parentEntryInPlane:(id)arg1 error:(id*)arg2 ;
-(id)registryIteratorForServicePlaneWithOptions:(unsigned)arg1 error:(id*)arg2 ;
-(id)nameInServicePlaneWithError:(id*)arg1 ;
-(id)locationInServicePlaneWithError:(id*)arg1 ;
-(id)pathInServicePlane;
-(id)searchForPropertyWithKey:(id)arg1 inPlane:(id)arg2 ;
-(id)childIteratorInServicePlaneWithError:(id*)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(id)childInServicePlaneWithError:(id*)arg1 ;
-(id)parentIteratorInServicePlaneWithError:(id*)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(id)parentEntryInServicePlaneWithError:(id*)arg1 ;
-(BOOL)isAttachedToPlane:(id)arg1 ;
@end

