/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoListSubcredentialInvitationsResponse : PBCodable <NSCopying> {

	NSData* _subcredentialInvitationsData;

}

@property (nonatomic,readonly) BOOL hasSubcredentialInvitationsData; 
@property (nonatomic,retain) NSData * subcredentialInvitationsData;               //@synthesize subcredentialInvitationsData=_subcredentialInvitationsData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSubcredentialInvitationsData:(NSData *)arg1 ;
-(BOOL)hasSubcredentialInvitationsData;
-(NSData *)subcredentialInvitationsData;
@end

