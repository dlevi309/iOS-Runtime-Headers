/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	unsigned _actionIndex;
	NSString* _key;
	NSString* _shortcutIdentifier;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutIdentifier; 
@property (nonatomic,retain) NSString * shortcutIdentifier;              //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasActionIndex; 
@property (assign,nonatomic) unsigned actionIndex;                       //@synthesize actionIndex=_actionIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;                //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(unsigned)actionIndex;
-(void)setActionIndex:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(NSString *)key;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)shortcutIdentifier;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasActionIdentifier;
-(BOOL)hasShortcutIdentifier;
-(void)setHasActionIndex:(BOOL)arg1 ;
-(BOOL)hasActionIndex;
@end

