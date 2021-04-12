/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBEditShortcutEvent : PBCodable <NSCopying> {

	unsigned _actionCount;
	NSString* _addToSiriBundleIdentifier;
	NSString* _galleryIdentifier;
	NSString* _key;
	NSString* _shortcutSource;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasActionCount; 
@property (assign,nonatomic) unsigned actionCount;                              //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasAddToSiriBundleIdentifier; 
@property (nonatomic,retain) NSString * addToSiriBundleIdentifier;              //@synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryIdentifier; 
@property (nonatomic,retain) NSString * galleryIdentifier;                      //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutSource; 
@property (nonatomic,retain) NSString * shortcutSource;                         //@synthesize shortcutSource=_shortcutSource - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(void)setShortcutSource:(NSString *)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(NSString *)galleryIdentifier;
-(void)setHasActionCount:(BOOL)arg1 ;
-(BOOL)hasActionCount;
-(BOOL)hasAddToSiriBundleIdentifier;
-(BOOL)hasGalleryIdentifier;
-(BOOL)hasShortcutSource;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
-(NSString *)shortcutSource;
@end

