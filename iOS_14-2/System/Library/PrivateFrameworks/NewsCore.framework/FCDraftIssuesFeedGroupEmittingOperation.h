/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCDraftIssuesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _issueListID;

}

@property (nonatomic,readonly) NSString * issueListID;              //@synthesize issueListID=_issueListID - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(NSString *)issueListID;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 issueListID:(id)arg5 ;
@end

