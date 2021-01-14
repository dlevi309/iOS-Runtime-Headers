/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBExperimentalGroup : PBCodable <NSCopying> {

	NSString* _abGroupIdentifier;
	NSString* _experimentId;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                   //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroupIdentifier; 
@property (nonatomic,retain) NSString * abGroupIdentifier;              //@synthesize abGroupIdentifier=_abGroupIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)abGroupIdentifier;
-(BOOL)hasExperimentId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)experimentId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAbGroupIdentifier;
-(void)setAbGroupIdentifier:(NSString *)arg1 ;
@end

