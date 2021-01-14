/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCMutableIssueReadingHistoryItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <FCMutableIssueReadingHistoryItem, NSCopying> {

	NSString* _identifier;
	NSString* _issueID;
	NTPBDate* _lastBadgedPBDate;
	NTPBDate* _lastEngagedPBDate;
	NTPBDate* _lastRemovedFromMyMagazinesPBDate;
	NTPBDate* _lastSeenPBDate;
	NSString* _lastVisitedArticleID;
	NTPBDate* _lastVisitedPBDate;
	NSString* _lastVisitedPageID;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * issueID; 
@property (nonatomic,copy) NSDate * lastVisitedDate; 
@property (nonatomic,copy) NSDate * lastBadgedDate; 
@property (nonatomic,copy) NSDate * lastEngagedDate; 
@property (nonatomic,copy) NSDate * lastSeenDate; 
@property (nonatomic,copy) NSDate * lastRemovedFromMyMagazinesDate; 
@property (nonatomic,copy) NSString * lastVisitedArticleID; 
@property (nonatomic,copy) NSString * lastVisitedPageID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueID; 
@property (nonatomic,retain) NSString * issueID;                                       //@synthesize issueID=_issueID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedPBDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedPBDate;                             //@synthesize lastVisitedPBDate=_lastVisitedPBDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedArticleID; 
@property (nonatomic,retain) NSString * lastVisitedArticleID;                          //@synthesize lastVisitedArticleID=_lastVisitedArticleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedPageID; 
@property (nonatomic,retain) NSString * lastVisitedPageID;                             //@synthesize lastVisitedPageID=_lastVisitedPageID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastBadgedPBDate; 
@property (nonatomic,retain) NTPBDate * lastBadgedPBDate;                              //@synthesize lastBadgedPBDate=_lastBadgedPBDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastEngagedPBDate; 
@property (nonatomic,retain) NTPBDate * lastEngagedPBDate;                             //@synthesize lastEngagedPBDate=_lastEngagedPBDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastRemovedFromMyMagazinesPBDate; 
@property (nonatomic,retain) NTPBDate * lastRemovedFromMyMagazinesPBDate;              //@synthesize lastRemovedFromMyMagazinesPBDate=_lastRemovedFromMyMagazinesPBDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastSeenPBDate; 
@property (nonatomic,retain) NTPBDate * lastSeenPBDate;                                //@synthesize lastSeenPBDate=_lastSeenPBDate - In the implementation block
+(int)keyValuePairType;
+(id)issueReadingHistoryItemWithCKRecord:(id)arg1 ;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLastVisitedDate:(NSDate *)arg1 ;
-(void)setLastBadgedDate:(NSDate *)arg1 ;
-(NSDate *)lastBadgedDate;
-(void)setLastEngagedDate:(NSDate *)arg1 ;
-(NSDate *)lastEngagedDate;
-(void)setLastRemovedFromMyMagazinesDate:(NSDate *)arg1 ;
-(id)asCKRecord;
-(NSDate *)lastRemovedFromMyMagazinesDate;
-(NSDate *)lastSeenDate;
-(NSDate *)lastVisitedDate;
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)issueID;
-(void)setLastVisitedArticleID:(NSString *)arg1 ;
-(void)setLastVisitedPageID:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)lastVisitedArticleID;
-(NSString *)lastVisitedPageID;
-(void)setIssueID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setLastVisitedPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastVisitedPBDate;
-(void)setLastBadgedPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastBadgedPBDate;
-(void)setLastEngagedPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastEngagedPBDate;
-(void)setLastSeenPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastSeenPBDate;
-(void)setLastRemovedFromMyMagazinesPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastRemovedFromMyMagazinesPBDate;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIssueID;
-(BOOL)hasLastVisitedPBDate;
-(BOOL)hasLastVisitedArticleID;
-(BOOL)hasLastVisitedPageID;
-(BOOL)hasLastBadgedPBDate;
-(BOOL)hasLastEngagedPBDate;
-(BOOL)hasLastRemovedFromMyMagazinesPBDate;
-(BOOL)hasLastSeenPBDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

