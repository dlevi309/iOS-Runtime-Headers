/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBAdExposureIneligible : PBCodable <NSCopying> {

	int _exposureIneligibleLocationType;
	NSString* _exposureIneligibleLocationTypeId;
	int _exposureIneligibleReason;
	int _feedType;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasExposureIneligibleLocationType; 
@property (assign,nonatomic) int exposureIneligibleLocationType;                       //@synthesize exposureIneligibleLocationType=_exposureIneligibleLocationType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                             //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasExposureIneligibleLocationTypeId; 
@property (nonatomic,retain) NSString * exposureIneligibleLocationTypeId;              //@synthesize exposureIneligibleLocationTypeId=_exposureIneligibleLocationTypeId - In the implementation block
@property (assign,nonatomic) BOOL hasExposureIneligibleReason; 
@property (assign,nonatomic) int exposureIneligibleReason;                             //@synthesize exposureIneligibleReason=_exposureIneligibleReason - In the implementation block
-(id)dictionaryRepresentation;
-(int)feedType;
-(BOOL)hasExposureIneligibleLocationType;
-(BOOL)hasExposureIneligibleLocationTypeId;
-(int)exposureIneligibleReason;
-(void)setExposureIneligibleReason:(int)arg1 ;
-(void)setHasExposureIneligibleReason:(BOOL)arg1 ;
-(BOOL)hasExposureIneligibleReason;
-(NSString *)exposureIneligibleLocationTypeId;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExposureIneligibleLocationTypeId:(NSString *)arg1 ;
-(int)exposureIneligibleLocationType;
-(void)setExposureIneligibleLocationType:(int)arg1 ;
-(void)setHasExposureIneligibleLocationType:(BOOL)arg1 ;
@end

