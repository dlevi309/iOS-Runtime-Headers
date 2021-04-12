/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NSString;

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying> {

	NSMutableArray* _manifestEntrys;
	NSData* _manifestHash;
	NSString* _passTypeIdentifier;
	unsigned _sequenceCounter;
	NSString* _serialNumber;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NSString * passTypeIdentifier;                //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceCounter; 
@property (assign,nonatomic) unsigned sequenceCounter;                     //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                        //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * manifestEntrys;              //@synthesize manifestEntrys=_manifestEntrys - In the implementation block
+(Class)manifestEntryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)sequenceCounter;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(NSData *)manifestHash;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSequenceCounter:(unsigned)arg1 ;
-(BOOL)hasSequenceCounter;
-(NSMutableArray *)manifestEntrys;
-(void)setHasSequenceCounter:(BOOL)arg1 ;
-(void)addManifestEntry:(id)arg1 ;
-(unsigned long long)manifestEntrysCount;
-(void)clearManifestEntrys;
-(id)manifestEntryAtIndex:(unsigned long long)arg1 ;
-(void)setManifestEntrys:(NSMutableArray *)arg1 ;
@end

