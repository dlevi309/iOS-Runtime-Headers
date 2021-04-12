/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSSet;

@interface MapsSync.MapsSyncCollectionItem : MapsSync.MapsSyncBaseItem {

	 _collections;

}

@property (readonly,nonatomic) BOOL requiresCollection; 
@property (readonly,nonatomic) NSSet * collections; 
+(id)fetchCollectionItemForIdentifier:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithCollection:(id)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(BOOL)requiresCollection;
-(void)executeOnFirstSave:(id)arg1 ;
-(NSSet *)collections;
-(void)setPropertiesWithObject:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

