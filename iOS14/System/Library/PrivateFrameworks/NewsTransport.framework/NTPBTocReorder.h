/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBTocReorder : PBCodable <NSCopying> {

	NSString* _feedId;
	int _feedType;
	NSData* _tocExposureId;
	int _tocNewIndex;
	int _tocOldIndex;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasTocExposureId; 
@property (nonatomic,retain) NSData * tocExposureId;               //@synthesize tocExposureId=_tocExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasTocOldIndex; 
@property (assign,nonatomic) int tocOldIndex;                      //@synthesize tocOldIndex=_tocOldIndex - In the implementation block
@property (assign,nonatomic) BOOL hasTocNewIndex; 
@property (assign,nonatomic) int tocNewIndex;                      //@synthesize tocNewIndex=_tocNewIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                    //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                         //@synthesize feedType=_feedType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setFeedId:(NSString *)arg1 ;
-(int)feedType;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasFeedId;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(void)setTocExposureId:(NSData *)arg1 ;
-(BOOL)hasTocExposureId;
-(void)setTocOldIndex:(int)arg1 ;
-(void)setHasTocOldIndex:(BOOL)arg1 ;
-(BOOL)hasTocOldIndex;
-(void)setTocNewIndex:(int)arg1 ;
-(void)setHasTocNewIndex:(BOOL)arg1 ;
-(BOOL)hasTocNewIndex;
-(NSData *)tocExposureId;
-(int)tocOldIndex;
-(int)tocNewIndex;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

