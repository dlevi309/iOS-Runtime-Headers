/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
-(void)mergeFrom:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(id)description;
-(int)StringAsChangeType:(id)arg1 ;
-(VCPBIntentDefinition *)intentDefinition;
-(void)setIntentDefinition:(VCPBIntentDefinition *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)associatedBundleID;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
-(BOOL)hasIntentDefinition;
@end

