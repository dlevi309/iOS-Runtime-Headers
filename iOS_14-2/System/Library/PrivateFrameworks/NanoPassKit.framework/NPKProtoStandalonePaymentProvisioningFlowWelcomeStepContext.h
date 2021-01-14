/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHeroImages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)heroImages;
-(void)addHeroImages:(id)arg1 ;
-(unsigned long long)heroImagesCount;
-(void)clearHeroImages;
-(id)heroImagesAtIndex:(unsigned long long)arg1 ;
@end

