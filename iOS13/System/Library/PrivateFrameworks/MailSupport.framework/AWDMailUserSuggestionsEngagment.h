/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailUserSuggestionsEngagment : PBCodable <NSCopying> {

	long long _searchTermLength;
	BOOL _topHitsPresent;
	BOOL _userSelectedTopHit;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTopHitsPresent; 
@property (assign,nonatomic) BOOL topHitsPresent;                     //@synthesize topHitsPresent=_topHitsPresent - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectedTopHit; 
@property (assign,nonatomic) BOOL userSelectedTopHit;                 //@synthesize userSelectedTopHit=_userSelectedTopHit - In the implementation block
@property (assign,nonatomic) BOOL hasSearchTermLength; 
@property (assign,nonatomic) long long searchTermLength;              //@synthesize searchTermLength=_searchTermLength - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTopHitsPresent:(BOOL)arg1 ;
-(void)setUserSelectedTopHit:(BOOL)arg1 ;
-(void)setSearchTermLength:(long long)arg1 ;
-(id)initWithSearchTermLength:(unsigned long long)arg1 topHitsPresent:(BOOL)arg2 userSelectedTopHit:(BOOL)arg3 ;
-(void)setHasTopHitsPresent:(BOOL)arg1 ;
-(BOOL)hasTopHitsPresent;
-(void)setHasUserSelectedTopHit:(BOOL)arg1 ;
-(BOOL)hasUserSelectedTopHit;
-(void)setHasSearchTermLength:(BOOL)arg1 ;
-(BOOL)hasSearchTermLength;
-(BOOL)topHitsPresent;
-(BOOL)userSelectedTopHit;
-(long long)searchTermLength;
@end

