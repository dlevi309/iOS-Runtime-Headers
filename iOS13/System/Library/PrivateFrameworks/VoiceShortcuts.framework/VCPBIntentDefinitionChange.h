/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying> {

	NSString* _associatedBundleID;
	int _changeType;
	VCPBIntentDefinition* _intentDefinition;

}

@property (assign,nonatomic) int changeType;                                       //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * associatedBundleID;                        //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentDefinition; 
@property (nonatomic,retain) VCPBIntentDefinition * intentDefinition;              //@synthesize intentDefinition=_intentDefinition - In the implementation block
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
-(VCPBIntentDefinition *)intentDefinition;
-(void)setIntentDefinition:(VCPBIntentDefinition *)arg1 ;
-(NSString *)associatedBundleID;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
-(BOOL)hasIntentDefinition;
@end

