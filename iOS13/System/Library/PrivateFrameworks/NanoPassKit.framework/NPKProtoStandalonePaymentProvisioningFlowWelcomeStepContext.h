/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable <NSCopying> {

	NSMutableArray* _heroImages;

}

@property (nonatomic,retain) NSMutableArray * heroImages;              //@synthesize heroImages=_heroImages - In the implementation block
+(Class)heroImagesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHeroImages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)heroImages;
-(void)addHeroImages:(id)arg1 ;
-(unsigned long long)heroImagesCount;
-(void)clearHeroImages;
-(id)heroImagesAtIndex:(unsigned long long)arg1 ;
@end

