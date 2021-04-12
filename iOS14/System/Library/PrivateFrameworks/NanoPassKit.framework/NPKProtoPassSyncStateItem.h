/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSString *)serialNumber;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)sequenceCounter;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSequenceCounter:(unsigned)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)manifestHash;
-(BOOL)hasSequenceCounter;
-(NSMutableArray *)manifestEntrys;
-(void)setHasSequenceCounter:(BOOL)arg1 ;
-(void)addManifestEntry:(id)arg1 ;
-(unsigned long long)manifestEntrysCount;
-(void)clearManifestEntrys;
-(id)manifestEntryAtIndex:(unsigned long long)arg1 ;
-(void)setManifestEntrys:(NSMutableArray *)arg1 ;
@end

