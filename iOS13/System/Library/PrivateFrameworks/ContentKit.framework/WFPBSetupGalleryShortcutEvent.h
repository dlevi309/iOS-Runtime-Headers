/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_WF13 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasKey;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(BOOL)hasGalleryCategoryIdentifier;
-(NSString *)galleryCategoryIdentifier;
-(void)setGalleryCategoryIdentifier:(NSString *)arg1 ;
-(BOOL)hasAddToSiriBundleIdentifier;
-(BOOL)hasGalleryIdentifier;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
@end

