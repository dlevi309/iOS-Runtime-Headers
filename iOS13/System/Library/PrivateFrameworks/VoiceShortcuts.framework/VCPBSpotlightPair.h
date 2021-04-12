/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)workflowID;
-(void)setWorkflowID:(NSString *)arg1 ;
-(unsigned long long)spotlightHash;
-(void)setSpotlightHash:(unsigned long long)arg1 ;
@end

