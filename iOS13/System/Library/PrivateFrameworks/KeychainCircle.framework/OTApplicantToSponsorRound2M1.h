/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface OTApplicantToSponsorRound2M1 : PBCodable <NSCopying> {

	NSString* _peerID;
	NSData* _permanentInfo;
	NSData* _permanentInfoSig;
	NSData* _stableInfo;
	NSData* _stableInfoSig;

}

@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                       //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasPermanentInfo; 
@property (nonatomic,retain) NSData * permanentInfo;                  //@synthesize permanentInfo=_permanentInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasPermanentInfoSig; 
@property (nonatomic,retain) NSData * permanentInfoSig;               //@synthesize permanentInfoSig=_permanentInfoSig - In the implementation block
@property (nonatomic,readonly) BOOL hasStableInfo; 
@property (nonatomic,retain) NSData * stableInfo;                     //@synthesize stableInfo=_stableInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasStableInfoSig; 
@property (nonatomic,retain) NSData * stableInfoSig;                  //@synthesize stableInfoSig=_stableInfoSig - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(BOOL)hasPeerID;
-(BOOL)hasPermanentInfo;
-(BOOL)hasPermanentInfoSig;
-(BOOL)hasStableInfo;
-(BOOL)hasStableInfoSig;
-(NSData *)permanentInfo;
-(void)setPermanentInfo:(NSData *)arg1 ;
-(NSData *)permanentInfoSig;
-(void)setPermanentInfoSig:(NSData *)arg1 ;
-(NSData *)stableInfo;
-(void)setStableInfo:(NSData *)arg1 ;
-(NSData *)stableInfoSig;
-(void)setStableInfoSig:(NSData *)arg1 ;
@end

