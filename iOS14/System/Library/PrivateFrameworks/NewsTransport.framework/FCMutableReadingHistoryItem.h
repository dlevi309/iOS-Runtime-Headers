/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

@class NSString, NSDate;


@protocol FCMutableReadingHistoryItem <FCReadingHistoryItem>
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
@required
-(void)setDeviceID:(id)arg1;
-(NSString *)deviceID;
-(NSString *)articleID;
-(void)setReadCount:(long long)arg1;
-(NSDate *)lastVisitedAt;
-(NSDate *)lastListenedAt;
-(BOOL)hasArticleBeenRead;
-(BOOL)hasArticleCompletedListening;
-(BOOL)hasArticleBeenSeen;
-(BOOL)hasArticleBeenConsumed;
-(NSString *)sourceChannelTagID;
-(void)setFirstSeenAt:(id)arg1;
-(void)setHasArticleCompletedListening:(BOOL)arg1;
-(void)setMaxVersionSeen:(long long)arg1;
-(void)setFirstSeenAtOfMaxVersionSeen:(id)arg1;
-(long long)maxVersionRead;
-(void)setHasArticleBeenSeen:(BOOL)arg1;
-(long long)maxVersionSeen;
-(NSDate *)firstSeenAt;
-(unsigned long long)articleLikingStatus;
-(void)setArticleLikingStatus:(unsigned long long)arg1;
-(BOOL)hasArticleBeenMarkedOffensive;
-(void)setArticleID:(id)arg1;
-(void)setHasArticleBeenMarkedOffensive:(BOOL)arg1;
-(void)setLastVisitedAt:(id)arg1;
-(void)setHasArticleBeenConsumed:(BOOL)arg1;
-(void)setSourceChannelTagID:(id)arg1;
-(void)setHasArticleBeenRead:(BOOL)arg1;
-(void)setMaxVersionRead:(long long)arg1;
-(NSString *)readingPosition;
-(void)setReadingPosition:(id)arg1;
-(void)setLastListenedAt:(id)arg1;
-(double)listeningProgress;
-(void)setListeningProgress:(double)arg1;
-(NSDate *)listeningProgressSavedAt;
-(void)setListeningProgressSavedAt:(id)arg1;
-(NSDate *)readingPositionSavedAt;
-(void)setReadingPositionSavedAt:(id)arg1;
-(NSDate *)firstSeenAtOfMaxVersionSeen;
-(NSString *)identifier;
-(long long)readCount;

@end

