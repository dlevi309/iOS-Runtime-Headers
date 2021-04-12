/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserSegmentationApiModThreshold:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationApiModThreshold;
-(void)setUserSegmentationApiModMax:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationApiModMax;
-(NSString *)userSegmentationApiModThreshold;
-(NSString *)userSegmentationApiModMax;
-(void)setUserSegmentationRefreshRate:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationRefreshRate;
-(NSString *)userSegmentationRefreshRate;
@end

