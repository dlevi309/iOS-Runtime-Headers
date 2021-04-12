/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBFeedLoad : PBCodable <NSCopying> {

	NSString* _feedId;
	int _feedType;
	NSString* _feedViewExposureId;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                               //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                          //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSString * feedViewExposureId;              //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
-(BOOL)hasFeedViewExposureId;
-(id)dictionaryRepresentation;
-(void)setFeedId:(NSString *)arg1 ;
-(int)feedType;
-(NSString *)feedViewExposureId;
-(void)setFeedViewExposureId:(NSString *)arg1 ;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasFeedId;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

