/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate;

@interface NTPBFeedViewportEdition : PBCodable <NSCopying> {

	NTPBDate* _feedDateRangeEnd;
	NTPBDate* _feedDateRangeStart;
	NTPBDate* _keyDate;

}

@property (nonatomic,readonly) BOOL hasKeyDate; 
@property (nonatomic,retain) NTPBDate * keyDate;                         //@synthesize keyDate=_keyDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedDateRangeStart; 
@property (nonatomic,retain) NTPBDate * feedDateRangeStart;              //@synthesize feedDateRangeStart=_feedDateRangeStart - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedDateRangeEnd; 
@property (nonatomic,retain) NTPBDate * feedDateRangeEnd;                //@synthesize feedDateRangeEnd=_feedDateRangeEnd - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasKeyDate;
-(NTPBDate *)keyDate;
-(void)setKeyDate:(NTPBDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeedDateRangeEnd:(NTPBDate *)arg1 ;
-(id)description;
-(void)setFeedDateRangeStart:(NTPBDate *)arg1 ;
-(BOOL)hasFeedDateRangeEnd;
-(NTPBDate *)feedDateRangeStart;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFeedDateRangeStart;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTPBDate *)feedDateRangeEnd;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

