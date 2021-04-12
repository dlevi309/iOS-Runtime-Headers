/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NTPBChannelMembershipRecord, FCInterestToken, NSString;

@interface FCChannelMembership : NSObject {

	NTPBChannelMembershipRecord* _record;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBChannelMembershipRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                   //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * channelID; 
@property (nonatomic,readonly) BOOL isAllowedToSeeDrafts; 
@property (nonatomic,readonly) NSString * draftArticleListID; 
@property (nonatomic,readonly) NSString * draftIssueListID; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NTPBChannelMembershipRecord *)record;
-(void)setRecord:(NTPBChannelMembershipRecord *)arg1 ;
-(NSString *)channelID;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 ;
-(BOOL)isAllowedToSeeDrafts;
-(NSString *)draftArticleListID;
-(NSString *)draftIssueListID;
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
@end

