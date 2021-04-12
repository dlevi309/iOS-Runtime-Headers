/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL hasArticleBeenRead; 
@property (assign,nonatomic) BOOL hasArticleBeenSeen; 
@property (assign,nonatomic) BOOL hasArticleBeenMarkedOffensive; 
@property (assign,nonatomic) BOOL hasArticleBeenConsumed; 
@property (assign,nonatomic) unsigned long long articleLikingStatus; 
@required
-(NSString *)identifier;
-(NSString *)deviceID;
-(void)setDeviceID:(id)arg1;
-(NSString *)articleID;
-(NSDate *)lastVisitedAt;
-(BOOL)hasArticleBeenRead;
-(BOOL)hasArticleBeenSeen;
-(BOOL)hasArticleBeenConsumed;
-(NSString *)sourceChannelTagID;
-(void)setArticleID:(id)arg1;
-(void)setHasArticleBeenSeen:(BOOL)arg1;
-(void)setFirstSeenAt:(id)arg1;
-(long long)maxVersionSeen;
-(void)setMaxVersionSeen:(long long)arg1;
-(void)setFirstSeenAtOfMaxVersionSeen:(id)arg1;
-(unsigned long long)articleLikingStatus;
-(void)setArticleLikingStatus:(unsigned long long)arg1;
-(BOOL)hasArticleBeenMarkedOffensive;
-(void)setHasArticleBeenMarkedOffensive:(BOOL)arg1;
-(void)setHasArticleBeenConsumed:(BOOL)arg1;
-(void)setSourceChannelTagID:(id)arg1;
-(void)setLastVisitedAt:(id)arg1;
-(void)setHasArticleBeenRead:(BOOL)arg1;
-(long long)maxVersionRead;
-(void)setMaxVersionRead:(long long)arg1;
-(NSDate *)firstSeenAt;
-(NSDate *)firstSeenAtOfMaxVersionSeen;

@end

