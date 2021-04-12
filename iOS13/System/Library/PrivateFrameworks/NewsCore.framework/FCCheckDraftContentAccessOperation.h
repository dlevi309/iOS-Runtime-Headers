/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSArray, NSSet, NSDictionary;

@interface FCCheckDraftContentAccessOperation : FCOperation {

	id<FCContentContext> _context;
	NSArray* _channelMemberships;
	NSSet* _issueIDs;
	NSSet* _articleIDs;
	/*^block*/id _checkAccessCompletion;
	NSDictionary* _resultAccessByContentID;

}

@property (nonatomic,copy) NSDictionary * resultAccessByContentID;              //@synthesize resultAccessByContentID=_resultAccessByContentID - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * channelMemberships;                        //@synthesize channelMemberships=_channelMemberships - In the implementation block
@property (nonatomic,copy) NSSet * issueIDs;                                    //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,copy) NSSet * articleIDs;                                  //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) id checkAccessCompletion;                            //@synthesize checkAccessCompletion=_checkAccessCompletion - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSSet *)issueIDs;
-(void)setChannelMemberships:(NSArray *)arg1 ;
-(void)setArticleIDs:(NSSet *)arg1 ;
-(void)setCheckAccessCompletion:(id)arg1 ;
-(void)setIssueIDs:(NSSet *)arg1 ;
-(NSSet *)articleIDs;
-(NSArray *)channelMemberships;
-(id)checkAccessCompletion;
-(void)setResultAccessByContentID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultAccessByContentID;
@end

