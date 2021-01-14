/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBImage, NSString;

@interface BLTPBAppearance : PBCodable <NSCopying> {

	BLTPBImage* _image;
	NSString* _title;
	BOOL _destructive;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) BLTPBImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL hasDestructive; 
@property (assign,nonatomic) BOOL destructive;                 //@synthesize destructive=_destructive - In the implementation block
-(id)dictionaryRepresentation;
-(void)setImage:(BLTPBImage *)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(BOOL)destructive;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BLTPBImage *)image;
-(id)description;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDestructive:(BOOL)arg1 ;
-(BOOL)hasDestructive;
@end

