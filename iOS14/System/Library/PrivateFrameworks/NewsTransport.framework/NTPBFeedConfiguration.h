/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBFeedConfiguration : PBCodable <NSCopying> {

	NSString* _freeAFeedID;
	NSString* _freeBFeedID;
	NSString* _freeCFeedID;
	NSString* _paidAFeedID;
	NSString* _paidBFeedID;
	NSString* _paidCFeedID;

}

@property (nonatomic,readonly) BOOL hasFreeAFeedID; 
@property (nonatomic,retain) NSString * freeAFeedID;              //@synthesize freeAFeedID=_freeAFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasFreeBFeedID; 
@property (nonatomic,retain) NSString * freeBFeedID;              //@synthesize freeBFeedID=_freeBFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasFreeCFeedID; 
@property (nonatomic,retain) NSString * freeCFeedID;              //@synthesize freeCFeedID=_freeCFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidAFeedID; 
@property (nonatomic,retain) NSString * paidAFeedID;              //@synthesize paidAFeedID=_paidAFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidBFeedID; 
@property (nonatomic,retain) NSString * paidBFeedID;              //@synthesize paidBFeedID=_paidBFeedID - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidCFeedID; 
@property (nonatomic,retain) NSString * paidCFeedID;              //@synthesize paidCFeedID=_paidCFeedID - In the implementation block
+(id)feedConfigurationFromJSON:(id)arg1 ;
+(id)feedConfigurationFromDict:(id)arg1 ;
-(id)feedIDForBin:(long long)arg1 paid:(BOOL)arg2 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setFreeAFeedID:(NSString *)arg1 ;
-(void)setFreeBFeedID:(NSString *)arg1 ;
-(void)setFreeCFeedID:(NSString *)arg1 ;
-(void)setPaidAFeedID:(NSString *)arg1 ;
-(void)setPaidBFeedID:(NSString *)arg1 ;
-(void)setPaidCFeedID:(NSString *)arg1 ;
-(NSString *)paidAFeedID;
-(NSString *)freeAFeedID;
-(NSString *)paidBFeedID;
-(NSString *)freeBFeedID;
-(NSString *)paidCFeedID;
-(NSString *)freeCFeedID;
-(id)description;
-(BOOL)hasFreeAFeedID;
-(BOOL)hasFreeBFeedID;
-(BOOL)hasFreeCFeedID;
-(BOOL)hasPaidAFeedID;
-(BOOL)hasPaidBFeedID;
-(BOOL)hasPaidCFeedID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

