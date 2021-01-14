/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBCreateFolderEvent : PBCodable <NSCopying> {

	NSString* _folderSource;
	unsigned _icon;
	NSString* _key;
	unsigned _shortcutCount;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasIcon; 
@property (assign,nonatomic) unsigned icon;                        //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL hasShortcutCount; 
@property (assign,nonatomic) unsigned shortcutCount;               //@synthesize shortcutCount=_shortcutCount - In the implementation block
@property (nonatomic,readonly) BOOL hasFolderSource; 
@property (nonatomic,retain) NSString * folderSource;              //@synthesize folderSource=_folderSource - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasIcon;
-(unsigned)icon;
-(void)mergeFrom:(id)arg1 ;
-(void)setIcon:(unsigned)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasIcon:(BOOL)arg1 ;
-(void)setShortcutCount:(unsigned)arg1 ;
-(void)setHasShortcutCount:(BOOL)arg1 ;
-(BOOL)hasShortcutCount;
-(BOOL)hasFolderSource;
-(unsigned)shortcutCount;
-(NSString *)folderSource;
-(void)setFolderSource:(NSString *)arg1 ;
@end

