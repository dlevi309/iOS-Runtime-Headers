/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSSet, NSString, NSData;

@interface MapsSync.MapsSyncCollection : MapsSync.MapsSyncBaseItem {

	 _collectionDescription;
	 _image;
	 _imageUrl;
	 _title;
	 _places;
	 _placesUnstored;

}

@property (copy,nonatomic) NSSet * _placesUnstored; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * collectionDescription; 
@property (readonly,nonatomic) NSData * image; 
@property (readonly,nonatomic) NSString * imageUrl; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSSet * places; 
+(void)fetchUniquelyOwnedCollectionItemsWithCollection:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)deleteUniquelyOwnedCollectionItemsWithCollection:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)fetchCollectionForIdentifier:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(NSSet *)places;
-(Class)managedObjectClass;
-(NSString *)imageUrl;
-(NSData *)image;
-(NSString *)collectionDescription;
-(Class)mutableObjectClass;
-(NSString *)description;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(NSSet *)_placesUnstored;
-(void)set_placesUnstored:(NSSet *)arg1 ;
-(BOOL)attributesEqual:(id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

