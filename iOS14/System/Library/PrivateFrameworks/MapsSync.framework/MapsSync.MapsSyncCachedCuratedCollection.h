/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSString, NSData, NSDate, _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncCachedCuratedCollection : MapsSync.MapsSyncBaseItem {

	 _collectionDescription;
	 _image;
	 _imageUrl;
	 _title;
	 _curatedCollectionIdentifier;
	 _isTombstone;
	 _placesCount;
	 _publisherAttribution;
	 _titleLocale;
	 _resultProviderIdentifier;

}

@property (readonly,nonatomic) long long identifierHash; 
@property (readonly,nonatomic) NSString * collectionDescription; 
@property (readonly,nonatomic) NSData * image; 
@property (readonly,nonatomic) NSString * imageUrl; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) unsigned long long curatedCollectionIdentifier; 
@property (readonly,nonatomic) BOOL isTombstone; 
@property (readonly,nonatomic) NSDate * lastFetchedDate; 
@property (readonly,nonatomic) NSDate * lastSignificantChangeDate; 
@property (readonly,nonatomic) int placesCount; 
@property (readonly,nonatomic) NSString * publisherAttribution; 
@property (readonly,nonatomic) NSString * titleLocale; 
@property (readonly,nonatomic) int resultProviderIdentifier; 
@property (readonly,nonatomic) _TtC8MapsSync19MapsSyncDataSession * session; 
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(void)fetchWithCuratedCollections:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)fetchWithCuratedCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(NSString *)imageUrl;
-(_TtC8MapsSync19MapsSyncDataSession *)session;
-(NSData *)image;
-(NSString *)collectionDescription;
-(NSString *)publisherAttribution;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(NSString *)titleLocale;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 ;
-(unsigned long long)curatedCollectionIdentifier;
-(NSDate *)lastSignificantChangeDate;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 ;
-(long long)identifierHash;
-(NSDate *)lastFetchedDate;
-(int)placesCount;
-(void)setPropertiesWithObject:(id)arg1 ;
-(int)resultProviderIdentifier;
-(BOOL)isTombstone;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

