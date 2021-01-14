/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@interface MapsSync.MapsSyncCuratedCollection : MapsSync.MapsSyncBaseItem {

	 _curatedCollectionIdentifier;
	 _resultProviderIdentifier;

}

@property (readonly,nonatomic) long long identifierHash; 
@property (readonly,nonatomic) unsigned long long curatedCollectionIdentifier; 
@property (readonly,nonatomic) int resultProviderIdentifier; 
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 ;
-(unsigned long long)curatedCollectionIdentifier;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 ;
-(long long)identifierHash;
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(int)resultProviderIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

