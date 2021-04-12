/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEIKEv2ESPSPI, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol, NEIKEv2DHProtocol;

@interface NEIKEv2ChildSAProposal : NSObject <NSCopying> {

	BOOL _opportunisticPFS;
	unsigned char _proposalNumber;
	unsigned long long _protocol;
	NSArray* _encryptionProtocols;
	NSArray* _integrityProtocols;
	NSArray* _dhProtocols;
	unsigned long long _lifetimeSeconds;
	NEIKEv2ESPSPI* _spi;
	NEIKEv2ESPSPI* _remoteSPI;
	NEIKEv2EncryptionProtocol* _chosenEncryptionProtocol;
	NEIKEv2IntegrityProtocol* _chosenIntegrityProtocol;
	NEIKEv2DHProtocol* _chosenDHProtocol;

}

@property (assign) unsigned char proposalNumber;                                      //@synthesize proposalNumber=_proposalNumber - In the implementation block
@property (retain) NEIKEv2ESPSPI * spi;                                               //@synthesize spi=_spi - In the implementation block
@property (retain) NEIKEv2ESPSPI * remoteSPI;                                         //@synthesize remoteSPI=_remoteSPI - In the implementation block
@property (retain) NEIKEv2EncryptionProtocol * chosenEncryptionProtocol;              //@synthesize chosenEncryptionProtocol=_chosenEncryptionProtocol - In the implementation block
@property (retain) NEIKEv2IntegrityProtocol * chosenIntegrityProtocol;                //@synthesize chosenIntegrityProtocol=_chosenIntegrityProtocol - In the implementation block
@property (retain) NEIKEv2DHProtocol * chosenDHProtocol;                              //@synthesize chosenDHProtocol=_chosenDHProtocol - In the implementation block
@property (readonly) NEIKEv2EncryptionProtocol * encryptionProtocol; 
@property (readonly) NEIKEv2IntegrityProtocol * integrityProtocol; 
@property (readonly) NEIKEv2DHProtocol * dhProtocol; 
@property (assign) unsigned long long protocol;                                       //@synthesize protocol=_protocol - In the implementation block
@property (retain) NSArray * encryptionProtocols;                                     //@synthesize encryptionProtocols=_encryptionProtocols - In the implementation block
@property (retain) NSArray * integrityProtocols;                                      //@synthesize integrityProtocols=_integrityProtocols - In the implementation block
@property (retain) NSArray * dhProtocols;                                             //@synthesize dhProtocols=_dhProtocols - In the implementation block
@property (assign) unsigned long long lifetimeSeconds;                                //@synthesize lifetimeSeconds=_lifetimeSeconds - In the implementation block
@property (assign) BOOL opportunisticPFS;                                             //@synthesize opportunisticPFS=_opportunisticPFS - In the implementation block
-(void)setProtocol:(unsigned long long)arg1 ;
-(NEIKEv2ESPSPI *)spi;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setSpi:(NEIKEv2ESPSPI *)arg1 ;
-(unsigned char)proposalNumber;
-(NEIKEv2EncryptionProtocol *)chosenEncryptionProtocol;
-(NSArray *)encryptionProtocols;
-(NEIKEv2IntegrityProtocol *)chosenIntegrityProtocol;
-(NSArray *)integrityProtocols;
-(unsigned long long)lifetimeSeconds;
-(void)setEncryptionProtocols:(NSArray *)arg1 ;
-(void)setIntegrityProtocols:(NSArray *)arg1 ;
-(void)setDhProtocols:(NSArray *)arg1 ;
-(void)setProposalNumber:(unsigned char)arg1 ;
-(void)setChosenEncryptionProtocol:(NEIKEv2EncryptionProtocol *)arg1 ;
-(void)setChosenIntegrityProtocol:(NEIKEv2IntegrityProtocol *)arg1 ;
-(void)setChosenDHProtocol:(NEIKEv2DHProtocol *)arg1 ;
-(NEIKEv2EncryptionProtocol *)encryptionProtocol;
-(NEIKEv2IntegrityProtocol *)integrityProtocol;
-(NEIKEv2DHProtocol *)dhProtocol;
-(BOOL)isAValidResponse;
-(BOOL)opportunisticPFS;
-(id)copyForRekey;
-(void)setRemoteSPI:(NEIKEv2ESPSPI *)arg1 ;
-(void)setOpportunisticPFS:(BOOL)arg1 ;
-(id)copyFromRemote:(id)arg1 checkDHGroup:(BOOL)arg2 ;
-(BOOL)matchesProposal:(id)arg1 checkDHGroup:(BOOL)arg2 ;
-(id)init;
-(unsigned long long)protocol;
-(void)setLifetimeSeconds:(unsigned long long)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NEIKEv2ESPSPI *)remoteSPI;
-(NEIKEv2DHProtocol *)chosenDHProtocol;
-(NSArray *)dhProtocols;
@end

