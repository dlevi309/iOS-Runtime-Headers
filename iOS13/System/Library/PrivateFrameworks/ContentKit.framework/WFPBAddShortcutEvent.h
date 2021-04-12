/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBAddShortcutEvent : PBCodable <NSCopying> {

	unsigned _actionCount;
	NSString* _addToSiriBundleIdentifier;
	NSString* _galleryIdentifier;
	NSString* _key;
	int _source;
	SCD_Struct_WF12 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                        //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasActionCount; 
@property (assign,nonatomic) unsigned actionCount;                              //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasAddToSiriBundleIdentifier; 
@property (nonatomic,retain) NSString * addToSiriBundleIdentifier;              //@synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryIdentifier; 
@property (nonatomic,retain) NSString * galleryIdentifier;                      //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(BOOL)hasKey;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(unsigned)actionCount;
-(void)setHasActionCount:(BOOL)arg1 ;
-(BOOL)hasActionCount;
-(BOOL)hasAddToSiriBundleIdentifier;
-(BOOL)hasGalleryIdentifier;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
@end

