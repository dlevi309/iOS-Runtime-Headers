/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, VCPBVoiceShortcut, NSString;

@interface VCPBVoiceShortcutChange : PBCodable <NSCopying> {

	int _changeType;
	NSData* _syncMetadata;
	VCPBVoiceShortcut* _voiceShortcut;
	NSString* _voiceShortcutIdentifier;

}

@property (assign,nonatomic) int changeType;                                  //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * voiceShortcutIdentifier;              //@synthesize voiceShortcutIdentifier=_voiceShortcutIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasVoiceShortcut; 
@property (nonatomic,retain) VCPBVoiceShortcut * voiceShortcut;               //@synthesize voiceShortcut=_voiceShortcut - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncMetadata; 
@property (nonatomic,retain) NSData * syncMetadata;                           //@synthesize syncMetadata=_syncMetadata - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)changeType;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(void)setVoiceShortcut:(VCPBVoiceShortcut *)arg1 ;
-(VCPBVoiceShortcut *)voiceShortcut;
-(BOOL)hasVoiceShortcut;
-(BOOL)hasSyncMetadata;
-(NSString *)voiceShortcutIdentifier;
-(void)setVoiceShortcutIdentifier:(NSString *)arg1 ;
-(NSData *)syncMetadata;
-(void)setSyncMetadata:(NSData *)arg1 ;
@end

