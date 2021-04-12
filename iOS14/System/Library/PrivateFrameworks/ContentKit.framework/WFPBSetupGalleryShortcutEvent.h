/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBSetupGalleryShortcutEvent : PBCodable <NSCopying> {

	NSString* _addToSiriBundleIdentifier;
	NSString* _galleryCategoryIdentifier;
	NSString* _galleryIdentifier;
	NSString* _key;
	BOOL _completed;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryCategoryIdentifier; 
@property (nonatomic,retain) NSString * galleryCategoryIdentifier;              //@synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryIdentifier; 
@property (nonatomic,retain) NSString * galleryIdentifier;                      //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAddToSiriBundleIdentifier; 
@property (nonatomic,retain) NSString * addToSiriBundleIdentifier;              //@synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                    //@synthesize completed=_completed - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)completed;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(BOOL)hasAddToSiriBundleIdentifier;
-(BOOL)hasGalleryIdentifier;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasGalleryCategoryIdentifier;
-(NSString *)galleryCategoryIdentifier;
-(void)setGalleryCategoryIdentifier:(NSString *)arg1 ;
@end

