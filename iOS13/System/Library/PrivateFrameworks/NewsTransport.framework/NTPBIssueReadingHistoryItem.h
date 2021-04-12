/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _lastVisitedArticleID;
	NTPBDate* _lastVisitedPBDate;
	NSString* _lastVisitedPageID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * issueID; 
@property (nonatomic,copy,readonly) NSDate * lastVisitedDate; 
@property (nonatomic,copy,readonly) NSDate * lastBadgedDate; 
@property (nonatomic,copy,readonly) NSDate * lastEngagedDate; 
@property (nonatomic,copy,readonly) NSDate * lastRemovedFromMyMagazinesDate; 
@property (nonatomic,copy,readonly) NSString * lastVisitedArticleID; 
@property (nonatomic,copy,readonly) NSString * lastVisitedPageID; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueID; 
@property (nonatomic,retain) NSString * issueID;                                          //@synthesize issueID=_issueID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedPBDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedPBDate;                                //@synthesize lastVisitedPBDate=_lastVisitedPBDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedArticleID; 
@property (nonatomic,retain) NSString * lastVisitedArticleID;                             //@synthesize lastVisitedArticleID=_lastVisitedArticleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedPageID; 
@property (nonatomic,retain) NSString * lastVisitedPageID;                                //@synthesize lastVisitedPageID=_lastVisitedPageID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastBadgedPBDate; 
@property (nonatomic,retain) NTPBDate * lastBadgedPBDate;                                 //@synthesize lastBadgedPBDate=_lastBadgedPBDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastEngagedPBDate; 
@property (nonatomic,retain) NTPBDate * lastEngagedPBDate;                                //@synthesize lastEngagedPBDate=_lastEngagedPBDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastRemovedFromMyMagazinesPBDate; 
@property (nonatomic,retain) NTPBDate * lastRemovedFromMyMagazinesPBDate;                 //@synthesize lastRemovedFromMyMagazinesPBDate=_lastRemovedFromMyMagazinesPBDate - In the implementation block
+(id)issueReadingHistoryItemWithCKRecord:(id)arg1 ;
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLastVisitedDate:(NSDate *)arg1 ;
-(void)setLastBadgedDate:(NSDate *)arg1 ;
-(NSDate *)lastBadgedDate;
-(void)setLastEngagedDate:(NSDate *)arg1 ;
-(NSDate *)lastEngagedDate;
-(void)setLastRemovedFromMyMagazinesDate:(NSDate *)arg1 ;
-(NSDate *)lastVisitedDate;
-(NSDate *)lastRemovedFromMyMagazinesDate;
-(id)asCKRecord;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setLastVisitedArticleID:(NSString *)arg1 ;
-(void)setLastVisitedPageID:(NSString *)arg1 ;
-(NSString *)lastVisitedArticleID;
-(NSString *)lastVisitedPageID;
-(NSString *)issueID;
-(void)setIssueID:(NSString *)arg1 ;
-(void)setLastVisitedPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastVisitedPBDate;
-(void)setLastBadgedPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastBadgedPBDate;
-(void)setLastEngagedPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastEngagedPBDate;
-(void)setLastRemovedFromMyMagazinesPBDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastRemovedFromMyMagazinesPBDate;
-(BOOL)hasIssueID;
-(BOOL)hasLastVisitedPBDate;
-(BOOL)hasLastVisitedArticleID;
-(BOOL)hasLastVisitedPageID;
-(BOOL)hasLastBadgedPBDate;
-(BOOL)hasLastEngagedPBDate;
-(BOOL)hasLastRemovedFromMyMagazinesPBDate;
@end

