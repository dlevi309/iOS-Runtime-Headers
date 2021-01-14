/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncCollectionItem.h>

@class NSString, NSData;

@interface MapsSync.MapsSyncCollectionTransitItem : MapsSync.MapsSyncCollectionItem {

	 _transitLineStorage;
	 _muid;

}

@property (readonly,nonatomic) BOOL requiresCollection; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSData * transitLineStorageData; 
@property (readonly,nonatomic) unsigned long long muid; 
+(id)fetchCollectionTransitItemForIdentifier:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(NSString *)description;
-(id)initWithCollection:(id)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isDuplicateOfOther:(id)arg1 ;
-(BOOL)requiresCollection;
-(NSData *)transitLineStorageData;
-(unsigned long long)muid;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

