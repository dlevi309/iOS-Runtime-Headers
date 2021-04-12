/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NTPBOptInButtonExposure : PBCodable <NSCopying> {

	NSData* _groupViewExposureId;
	int _optInButtonLocation;
	NSString* _optInButtonLocationId;
	int _optInButtonType;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasOptInButtonType; 
@property (assign,nonatomic) int optInButtonType;                           //@synthesize optInButtonType=_optInButtonType - In the implementation block
@property (assign,nonatomic) BOOL hasOptInButtonLocation; 
@property (assign,nonatomic) int optInButtonLocation;                       //@synthesize optInButtonLocation=_optInButtonLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasOptInButtonLocationId; 
@property (nonatomic,retain) NSString * optInButtonLocationId;              //@synthesize optInButtonLocationId=_optInButtonLocationId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(BOOL)hasGroupViewExposureId;
-(NSData *)groupViewExposureId;
-(void)setOptInButtonLocationId:(NSString *)arg1 ;
-(int)optInButtonType;
-(void)setOptInButtonType:(int)arg1 ;
-(void)setHasOptInButtonType:(BOOL)arg1 ;
-(BOOL)hasOptInButtonType;
-(int)optInButtonLocation;
-(void)setOptInButtonLocation:(int)arg1 ;
-(void)setHasOptInButtonLocation:(BOOL)arg1 ;
-(BOOL)hasOptInButtonLocation;
-(BOOL)hasOptInButtonLocationId;
-(NSString *)optInButtonLocationId;
@end

