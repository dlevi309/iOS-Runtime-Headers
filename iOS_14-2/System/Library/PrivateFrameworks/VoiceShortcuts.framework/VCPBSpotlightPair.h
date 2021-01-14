/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCPBSpotlightPair : PBCodable <NSCopying> {

	unsigned long long _spotlightHash;
	NSString* _workflowID;

}

@property (nonatomic,retain) NSString * workflowID;                         //@synthesize workflowID=_workflowID - In the implementation block
@property (assign,nonatomic) unsigned long long spotlightHash;              //@synthesize spotlightHash=_spotlightHash - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)workflowID;
-(void)setWorkflowID:(NSString *)arg1 ;
-(unsigned long long)spotlightHash;
-(void)setSpotlightHash:(unsigned long long)arg1 ;
@end

