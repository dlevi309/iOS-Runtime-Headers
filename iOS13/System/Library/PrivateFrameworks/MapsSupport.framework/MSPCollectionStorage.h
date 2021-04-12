/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSData;

@interface MSPCollectionStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _collectionDescription;
	NSData* _image;
	NSString* _imageURL;
	NSData* _itemData;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) NSData * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL hasImageURL; 
@property (nonatomic,retain) NSString * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasCollectionDescription; 
@property (nonatomic,retain) NSString * collectionDescription;               //@synthesize collectionDescription=_collectionDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasItemData; 
@property (nonatomic,retain) NSData * itemData;                              //@synthesize itemData=_itemData - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(NSString *)imageURL;
-(PBUnknownFields *)unknownFields;
-(void)setImageURL:(NSString *)arg1 ;
-(NSData *)itemData;
-(void)setItemData:(NSData *)arg1 ;
-(void)setCollectionDescription:(NSString *)arg1 ;
-(NSString *)collectionDescription;
-(BOOL)hasImageURL;
-(BOOL)hasCollectionDescription;
-(BOOL)hasItemData;
@end

