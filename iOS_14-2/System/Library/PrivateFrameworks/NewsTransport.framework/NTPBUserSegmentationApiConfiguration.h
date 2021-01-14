/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying> {

	NSString* _userSegmentationApiModMax;
	NSString* _userSegmentationApiModThreshold;
	NSString* _userSegmentationRefreshRate;

}

@property (nonatomic,readonly) BOOL hasUserSegmentationApiModThreshold; 
@property (nonatomic,retain) NSString * userSegmentationApiModThreshold;              //@synthesize userSegmentationApiModThreshold=_userSegmentationApiModThreshold - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSegmentationApiModMax; 
@property (nonatomic,retain) NSString * userSegmentationApiModMax;                    //@synthesize userSegmentationApiModMax=_userSegmentationApiModMax - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSegmentationRefreshRate; 
@property (nonatomic,retain) NSString * userSegmentationRefreshRate;                  //@synthesize userSegmentationRefreshRate=_userSegmentationRefreshRate - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)userSegmentationApiModThreshold;
-(NSString *)userSegmentationApiModMax;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUserSegmentationRefreshRate:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationRefreshRate;
-(NSString *)userSegmentationRefreshRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserSegmentationApiModThreshold:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationApiModThreshold;
-(void)setUserSegmentationApiModMax:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationApiModMax;
-(BOOL)isEqual:(id)arg1 ;
@end

