/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class NSString, NSData, NSSet;

@interface MapsSync.MapsSyncMutableCollection : MapsSync.MapsSyncMutableBaseItem {

	 _proxyCollection;

}

@property (copy,nonatomic) NSString * collectionDescription; 
@property (copy,nonatomic) NSData * image; 
@property (copy,nonatomic) NSString * imageUrl; 
@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSSet * places; 
-(void)setImage:(NSData *)arg1 ;
-(NSSet *)places;
-(NSString *)imageUrl;
-(void)setImageUrl:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSData *)image;
-(NSString *)collectionDescription;
-(id)initWithProxyObject:(id)arg1 ;
-(void)setCollectionDescription:(NSString *)arg1 ;
-(void)addItemWithCollectionItem:(id)arg1 ;
-(void)removePlaceWithCollectionItem:(id)arg1 ;
-(void)setPlaces:(NSSet *)arg1 ;
-(NSString *)title;
@end

