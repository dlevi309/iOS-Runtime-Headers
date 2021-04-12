/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class NSString, NSData, NSDate;

@interface MapsSync.MapsSyncMutableCachedCuratedCollection : MapsSync.MapsSyncMutableBaseItem {

	 _proxy;

}

@property (copy,nonatomic) NSString * collectionDescription; 
@property (copy,nonatomic) NSData * image; 
@property (copy,nonatomic) NSString * imageUrl; 
@property (copy,nonatomic) NSString * title; 
@property (assign,nonatomic) unsigned long long curatedCollectionIdentifier; 
@property (assign,nonatomic) BOOL isTombstone; 
@property (copy,nonatomic) NSDate * lastFetchedDate; 
@property (copy,nonatomic) NSDate * lastSignificantChangeDate; 
@property (assign,nonatomic) int placesCount; 
@property (copy,nonatomic) NSString * publisherAttribution; 
@property (copy,nonatomic) NSString * titleLocale; 
@property (assign,nonatomic) int resultProviderIdentifier; 
-(void)setImage:(NSData *)arg1 ;
-(NSString *)imageUrl;
-(void)setImageUrl:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSData *)image;
-(NSString *)collectionDescription;
-(NSString *)publisherAttribution;
-(NSString *)titleLocale;
-(id)initWithProxyObject:(id)arg1 ;
-(void)setCollectionDescription:(NSString *)arg1 ;
-(void)setIsTombstone:(BOOL)arg1 ;
-(unsigned long long)curatedCollectionIdentifier;
-(void)setCuratedCollectionIdentifier:(unsigned long long)arg1 ;
-(void)setLastFetchedDate:(NSDate *)arg1 ;
-(NSDate *)lastSignificantChangeDate;
-(void)setLastSignificantChangeDate:(NSDate *)arg1 ;
-(void)setPlacesCount:(int)arg1 ;
-(void)setTitleLocale:(NSString *)arg1 ;
-(void)setPublisherAttribution:(NSString *)arg1 ;
-(NSDate *)lastFetchedDate;
-(int)placesCount;
-(int)resultProviderIdentifier;
-(void)setResultProviderIdentifier:(int)arg1 ;
-(BOOL)isTombstone;
-(NSString *)title;
@end

