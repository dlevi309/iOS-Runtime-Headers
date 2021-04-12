/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable <NSCopying> {

	CKDPAsset* _manifest;
	NSMutableArray* _sections;

}

@property (nonatomic,readonly) BOOL hasManifest; 
@property (nonatomic,retain) CKDPAsset * manifest;                   //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
+(Class)sectionsType;
-(void)setSections:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)sections;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)sectionsCount;
-(CKDPAsset *)manifest;
-(void)addSections:(id)arg1 ;
-(void)clearSections;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setManifest:(CKDPAsset *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasManifest;
@end

