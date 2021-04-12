/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setArticleIDs:(NSSet *)arg1 ;
-(id)init;
-(NSSet *)articleIDs;
-(NSArray *)channelMemberships;
-(id)checkAccessCompletion;
-(void)setResultAccessByContentID:(NSDictionary *)arg1 ;
-(void)setChannelMemberships:(NSArray *)arg1 ;
-(NSDictionary *)resultAccessByContentID;
-(void)setCheckAccessCompletion:(id)arg1 ;
-(id<FCContentContext>)context;
-(NSSet *)issueIDs;
-(void)setIssueIDs:(NSSet *)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

