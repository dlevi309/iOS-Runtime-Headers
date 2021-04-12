/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class MapsSyncManagedFavoriteItem, NSSet, NSString, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableFavoriteItem : MapsSync.MapsSyncMutableBaseItem {

	 _proxyFavorite;

}

@property (retain,nonatomic) MapsSyncManagedFavoriteItem * _proxyFavorite;              //@synthesize proxyFavorite=_proxyFavorite - In the implementation block
@property (copy,nonatomic) NSSet * contactHandles; 
@property (copy,nonatomic) NSString * customName; 
@property (assign,nonatomic) BOOL hidden; 
@property (retain,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (copy,nonatomic) NSString * originatingAddressString; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) short source; 
@property (copy,nonatomic) NSString * shortcutIdentifier; 
@property (assign,nonatomic) short version; 
-(BOOL)hidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setType:(short)arg1 ;
-(void)setSource:(short)arg1 ;
-(NSString *)customName;
-(NSSet *)contactHandles;
-(void)moveToBack;
-(void)setCustomName:(NSString *)arg1 ;
-(void)moveToFront;
-(id)initWithProxyObject:(id)arg1 ;
-(id)moveBeforeItem:(id)arg1 ;
-(id)moveAfterItem:(id)arg1 ;
-(void)setOriginatingAddressString:(NSString *)arg1 ;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(MapsSyncManagedFavoriteItem *)_proxyFavorite;
-(void)set_proxyFavorite:(MapsSyncManagedFavoriteItem *)arg1 ;
-(id)addContactHandle:(id)arg1 ;
-(id)removeContactHandle:(id)arg1 ;
-(short)type;
-(void)setContactHandles:(NSSet *)arg1 ;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setVersion:(short)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(short)version;
-(NSString *)originatingAddressString;
-(NSString *)shortcutIdentifier;
-(short)source;
@end

