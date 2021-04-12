/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NPKProtoPass;

@interface NPKProtoAcceptSubcredentialInvitationResponse : PBCodable <NSCopying> {

	NSData* _errorData;
	NPKProtoPass* _passForInvitation;

}

@property (nonatomic,readonly) BOOL hasPassForInvitation; 
@property (nonatomic,retain) NPKProtoPass * passForInvitation;              //@synthesize passForInvitation=_passForInvitation - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                            //@synthesize errorData=_errorData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(NSData *)errorData;
-(void)setPassForInvitation:(NPKProtoPass *)arg1 ;
-(BOOL)hasPassForInvitation;
-(NPKProtoPass *)passForInvitation;
@end

