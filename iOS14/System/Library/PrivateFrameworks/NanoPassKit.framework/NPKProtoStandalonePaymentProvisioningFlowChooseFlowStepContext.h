/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext : PBCodable <NSCopying> {

	NSMutableArray* _sections;

}

@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
+(Class)sectionsType;
-(void)setSections:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)sections;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)sectionsCount;
-(void)addSections:(id)arg1 ;
-(void)clearSections;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

