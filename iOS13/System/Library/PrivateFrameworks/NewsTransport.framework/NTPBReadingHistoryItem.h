/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCMutableReadingHistoryItem.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NTPBDate, CKRecord;

@interface NTPBReadingHistoryItem : PBCodable <FCMutableReadingHistoryItem, FCKeyValueStoreCoding, NSCopying> {

	long long _maxVersionRead;
	long long _maxVersionSeen;
	NSString* _articleID;
	NSString* _deviceID;
	NTPBDate* _firstSeenDate;
	NTPBDate* _firstSeenDateOfMaxVersionSeen;
	unsigned _flags;
	NTPBDate* _lastVisitedDate;
	NSString* _sourceChannelTagID;
	SCD_Struct_NT4 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * sourceChannelTagID; 
@property (nonatomic,copy,readonly) NSString * deviceID; 
@property (nonatomic,copy,readonly) NSDate * lastVisitedAt; 
@property (nonatomic,readonly) long long maxVersionRead; 
@property (nonatomic,copy,readonly) NSDate * firstSeenAt; 
@property (nonatomic,copy,readonly) NSDate * firstSeenAtOfMaxVersionSeen; 
@property (nonatomic,readonly) long long maxVersionSeen; 
@property (nonatomic,readonly) unsigned long long flags; 
@property (nonatomic,readonly) BOOL hasArticleBeenRead; 
@property (nonatomic,readonly) BOOL hasArticleBeenSeen; 
@property (nonatomic,readonly) BOOL hasArticleBeenMarkedOffensive; 
@property (nonatomic,readonly) BOOL hasArticleBeenConsumed; 
@property (nonatomic,readonly) unsigned long long articleLikingStatus; 
@property (nonatomic,readonly) CKRecord * asCKRecord; 
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                     //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedDate;                               //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                           //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionRead; 
@property (assign,nonatomic) long long maxVersionRead;                                 //@synthesize maxVersionRead=_maxVersionRead - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDate; 
@property (nonatomic,retain) NTPBDate * firstSeenDate;                                 //@synthesize firstSeenDate=_firstSeenDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDateOfMaxVersionSeen; 
@property (nonatomic,retain) NTPBDate * firstSeenDateOfMaxVersionSeen;                 //@synthesize firstSeenDateOfMaxVersionSeen=_firstSeenDateOfMaxVersionSeen - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionSeen; 
@property (assign,nonatomic) long long maxVersionSeen;                                 //@synthesize maxVersionSeen=_maxVersionSeen - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelTagID; 
@property (nonatomic,retain) NSString * sourceChannelTagID;                            //@synthesize sourceChannelTagID=_sourceChannelTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                                      //@synthesize deviceID=_deviceID - In the implementation block
+(id)readingHistoryItemWithCKRecord:(id)arg1 ;
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(CKRecord *)asCKRecord;
-(NSDate *)lastVisitedAt;
-(BOOL)hasArticleBeenRead;
-(BOOL)hasArticleBeenSeen;
-(BOOL)hasArticleBeenConsumed;
-(void)setHasArticleBeenSeen:(BOOL)arg1 ;
-(void)setFirstSeenAt:(NSDate *)arg1 ;
-(void)setFirstSeenAtOfMaxVersionSeen:(NSDate *)arg1 ;
-(unsigned long long)articleLikingStatus;
-(void)setArticleLikingStatus:(unsigned long long)arg1 ;
-(BOOL)hasArticleBeenMarkedOffensive;
-(void)setHasArticleBeenMarkedOffensive:(BOOL)arg1 ;
-(void)setHasArticleBeenConsumed:(BOOL)arg1 ;
-(void)setLastVisitedAt:(NSDate *)arg1 ;
-(void)setHasArticleBeenRead:(BOOL)arg1 ;
-(NSDate *)firstSeenAt;
-(NSDate *)firstSeenAtOfMaxVersionSeen;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDeviceID;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setLastVisitedDate:(NTPBDate *)arg1 ;
-(NSString *)articleID;
-(NTPBDate *)lastVisitedDate;
-(NSString *)sourceChannelTagID;
-(void)setArticleID:(NSString *)arg1 ;
-(long long)maxVersionSeen;
-(void)setMaxVersionSeen:(long long)arg1 ;
-(void)setSourceChannelTagID:(NSString *)arg1 ;
-(long long)maxVersionRead;
-(void)setMaxVersionRead:(long long)arg1 ;
-(NTPBDate *)firstSeenDate;
-(void)setFirstSeenDate:(NTPBDate *)arg1 ;
-(NTPBDate *)firstSeenDateOfMaxVersionSeen;
-(void)setFirstSeenDateOfMaxVersionSeen:(NTPBDate *)arg1 ;
-(BOOL)hasArticleID;
-(BOOL)hasSourceChannelTagID;
-(BOOL)hasLastVisitedDate;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setHasMaxVersionRead:(BOOL)arg1 ;
-(BOOL)hasMaxVersionRead;
-(BOOL)hasFirstSeenDate;
-(BOOL)hasFirstSeenDateOfMaxVersionSeen;
-(void)setHasMaxVersionSeen:(BOOL)arg1 ;
-(BOOL)hasMaxVersionSeen;
@end

