/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NTPBChannelMembershipRecord *)record;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(FCInterestToken *)interestToken;
-(BOOL)isAllowedToSeeDrafts;
-(NSString *)draftArticleListID;
-(NSString *)draftIssueListID;
-(void)setRecord:(NTPBChannelMembershipRecord *)arg1 ;
-(NSString *)channelID;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

