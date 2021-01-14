/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <MapsSupport/MSPCollectionStorage.h>
#import <libobjc.A.dylib/MSPMutableObject.h>
#import <libobjc.A.dylib/MSPImmutableObject.h>

@class NSLock, NSUUID, NSArray, MSPCollectionItemReplica, NSString;

@interface MSPCollection : MSPCollectionStorage <MSPMutableObject, MSPImmutableObject> {

	NSLock* _lock;
	NSUUID* _storageIdentifier;
	NSArray* _items;
	MSPCollectionItemReplica* _itemReplica;

}

@property (nonatomic,retain) MSPCollectionItemReplica * itemReplica;              //@synthesize itemReplica=_itemReplica - In the implementation block
@property (nonatomic,retain) NSArray * itemIdentifiers; 
@property (nonatomic,retain) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL isFavoritesCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setImageURL:(id)arg1 ;
-(NSArray *)itemIdentifiers;
-(void)setImage:(id)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id)init;
-(void)addItems:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSString *)description;
-(void)setCollectionDescription:(id)arg1 ;
-(id)storageIdentifier;
-(void)removeItems:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 storageIdentifier:(id)arg2 ;
-(void)mergeFromCollection:(id)arg1 isUserVisibleChange:(out BOOL*)arg2 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)copyIfValidWithError:(out id*)arg1 ;
-(void)_noteWillMutate;
-(void)setItemReplica:(MSPCollectionItemReplica *)arg1 ;
-(MSPCollectionItemReplica *)itemReplica;
-(BOOL)isFavoritesCollection;
@end

