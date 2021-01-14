/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCMutableReadingHistoryItem.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NTPBDate, CKRecord;

@interface NTPBReadingHistoryItem : PBCodable <FCMutableReadingHistoryItem, FCKeyValueStoreCoding, NSCopying> {

	double _listeningProgress;
	long long _maxVersionRead;
	long long _maxVersionSeen;
	long long _readCount;
	NSString* _articleID;
	NSString* _deviceID;
	NTPBDate* _firstSeenDate;
	NTPBDate* _firstSeenDateOfMaxVersionSeen;
	unsigned _flags;
	NTPBDate* _lastListened;
	NTPBDate* _lastVisitedDate;
	NTPBDate* _listeningProgressSavedDate;
	NSString* _readingPosition;
	NTPBDate* _readingPositionSavedDate;
	NSString* _sourceChannelTagID;
	SCD_Struct_NT11 _has;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * articleID; 
@property (nonatomic,copy) NSString * sourceChannelTagID; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSDate * lastVisitedAt; 
@property (assign,nonatomic) long long maxVersionRead; 
@property (nonatomic,copy) NSDate * firstSeenAt; 
@property (nonatomic,copy) NSDate * firstSeenAtOfMaxVersionSeen; 
@property (assign,nonatomic) long long maxVersionSeen; 
@property (assign,nonatomic) double listeningProgress; 
@property (nonatomic,copy) NSDate * listeningProgressSavedAt; 
@property (nonatomic,copy) NSDate * lastListenedAt; 
@property (nonatomic,copy) NSString * readingPosition; 
@property (nonatomic,copy) NSDate * readingPositionSavedAt; 
@property (assign,nonatomic) long long readCount; 
@property (assign,nonatomic) BOOL hasArticleBeenRead; 
@property (assign,nonatomic) BOOL hasArticleBeenSeen; 
@property (assign,nonatomic) BOOL hasArticleCompletedListening; 
@property (assign,nonatomic) BOOL hasArticleBeenMarkedOffensive; 
@property (assign,nonatomic) BOOL hasArticleBeenConsumed; 
@property (assign,nonatomic) unsigned long long articleLikingStatus; 
@property (nonatomic,readonly) unsigned long long flags; 
@property (nonatomic,readonly) CKRecord * asCKRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedDate;                            //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                        //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionRead; 
@property (assign,nonatomic) long long maxVersionRead;                              //@synthesize maxVersionRead=_maxVersionRead - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDate; 
@property (nonatomic,retain) NTPBDate * firstSeenDate;                              //@synthesize firstSeenDate=_firstSeenDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDateOfMaxVersionSeen; 
@property (nonatomic,retain) NTPBDate * firstSeenDateOfMaxVersionSeen;              //@synthesize firstSeenDateOfMaxVersionSeen=_firstSeenDateOfMaxVersionSeen - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionSeen; 
@property (assign,nonatomic) long long maxVersionSeen;                              //@synthesize maxVersionSeen=_maxVersionSeen - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelTagID; 
@property (nonatomic,retain) NSString * sourceChannelTagID;                         //@synthesize sourceChannelTagID=_sourceChannelTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                                   //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL hasListeningProgress; 
@property (assign,nonatomic) double listeningProgress;                              //@synthesize listeningProgress=_listeningProgress - In the implementation block
@property (nonatomic,readonly) BOOL hasLastListened; 
@property (nonatomic,retain) NTPBDate * lastListened;                               //@synthesize lastListened=_lastListened - In the implementation block
@property (nonatomic,readonly) BOOL hasReadingPosition; 
@property (nonatomic,retain) NSString * readingPosition;                            //@synthesize readingPosition=_readingPosition - In the implementation block
@property (assign,nonatomic) BOOL hasReadCount; 
@property (assign,nonatomic) long long readCount;                                   //@synthesize readCount=_readCount - In the implementation block
@property (nonatomic,readonly) BOOL hasListeningProgressSavedDate; 
@property (nonatomic,retain) NTPBDate * listeningProgressSavedDate;                 //@synthesize listeningProgressSavedDate=_listeningProgressSavedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasReadingPositionSavedDate; 
@property (nonatomic,retain) NTPBDate * readingPositionSavedDate;                   //@synthesize readingPositionSavedDate=_readingPositionSavedDate - In the implementation block
+(int)keyValuePairType;
+(id)readingHistoryItemWithCKRecord:(id)arg1 ;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(void)writeToKeyValuePair:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKRecord *)asCKRecord;
-(NSDate *)lastVisitedAt;
-(NSDate *)lastListenedAt;
-(BOOL)hasArticleBeenRead;
-(BOOL)hasArticleCompletedListening;
-(BOOL)hasArticleBeenSeen;
-(BOOL)hasArticleBeenConsumed;
-(void)setFirstSeenAt:(NSDate *)arg1 ;
-(void)setHasArticleCompletedListening:(BOOL)arg1 ;
-(void)setFirstSeenAtOfMaxVersionSeen:(NSDate *)arg1 ;
-(void)setHasArticleBeenSeen:(BOOL)arg1 ;
-(NSDate *)firstSeenAt;
-(unsigned long long)articleLikingStatus;
-(void)setArticleLikingStatus:(unsigned long long)arg1 ;
-(BOOL)hasArticleBeenMarkedOffensive;
-(void)setHasArticleBeenMarkedOffensive:(BOOL)arg1 ;
-(void)setLastVisitedAt:(NSDate *)arg1 ;
-(void)setHasArticleBeenConsumed:(BOOL)arg1 ;
-(void)setHasArticleBeenRead:(BOOL)arg1 ;
-(void)setLastListenedAt:(NSDate *)arg1 ;
-(NSDate *)listeningProgressSavedAt;
-(void)setListeningProgressSavedAt:(NSDate *)arg1 ;
-(NSDate *)readingPositionSavedAt;
-(void)setReadingPositionSavedAt:(NSDate *)arg1 ;
-(NSDate *)firstSeenAtOfMaxVersionSeen;
-(NSString *)identifier;
-(void)setDeviceID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)deviceID;
-(BOOL)hasSourceChannelTagID;
-(BOOL)hasLastVisitedDate;
-(void)setHasMaxVersionRead:(BOOL)arg1 ;
-(BOOL)hasMaxVersionRead;
-(BOOL)hasFirstSeenDate;
-(BOOL)hasFirstSeenDateOfMaxVersionSeen;
-(void)setHasMaxVersionSeen:(BOOL)arg1 ;
-(BOOL)hasReadCount;
-(BOOL)hasMaxVersionSeen;
-(void)setHasListeningProgress:(BOOL)arg1 ;
-(BOOL)hasListeningProgress;
-(BOOL)hasLastListened;
-(BOOL)hasReadingPosition;
-(void)setHasReadCount:(BOOL)arg1 ;
-(BOOL)hasListeningProgressSavedDate;
-(BOOL)hasReadingPositionSavedDate;
-(unsigned long long)flags;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)articleID;
-(BOOL)hasDeviceID;
-(void)setReadCount:(long long)arg1 ;
-(BOOL)hasArticleID;
-(void)setLastVisitedDate:(NTPBDate *)arg1 ;
-(NSString *)description;
-(NSString *)sourceChannelTagID;
-(void)setMaxVersionSeen:(long long)arg1 ;
-(long long)maxVersionRead;
-(long long)maxVersionSeen;
-(void)setArticleID:(NSString *)arg1 ;
-(void)setSourceChannelTagID:(NSString *)arg1 ;
-(void)setMaxVersionRead:(long long)arg1 ;
-(NSString *)readingPosition;
-(void)setReadingPosition:(NSString *)arg1 ;
-(double)listeningProgress;
-(void)setListeningProgress:(double)arg1 ;
-(NTPBDate *)lastListened;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NTPBDate *)firstSeenDate;
-(BOOL)hasFlags;
-(void)setLastListened:(NTPBDate *)arg1 ;
-(NTPBDate *)listeningProgressSavedDate;
-(void)setListeningProgressSavedDate:(NTPBDate *)arg1 ;
-(NTPBDate *)readingPositionSavedDate;
-(void)setReadingPositionSavedDate:(NTPBDate *)arg1 ;
-(void)setFirstSeenDate:(NTPBDate *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NTPBDate *)lastVisitedDate;
-(NTPBDate *)firstSeenDateOfMaxVersionSeen;
-(void)setFirstSeenDateOfMaxVersionSeen:(NTPBDate *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)readCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasFlags:(BOOL)arg1 ;
@end

