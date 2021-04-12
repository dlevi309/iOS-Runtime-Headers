/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSSet, FCCurrentIssuesCheckerResult;

@interface FCCurrentIssuesPromiseChainingData : NSObject {

	NSArray* _resultingIssues;
	NSSet* _bundleChannelIDs;
	NSArray* _followedChannelIDs;
	NSArray* _autoFavoriteTagIDs;
	FCCurrentIssuesCheckerResult* _partialResult;

}

@property (nonatomic,retain) NSArray * resultingIssues;                                 //@synthesize resultingIssues=_resultingIssues - In the implementation block
@property (nonatomic,retain) NSSet * bundleChannelIDs;                                  //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,retain) NSArray * followedChannelIDs;                              //@synthesize followedChannelIDs=_followedChannelIDs - In the implementation block
@property (nonatomic,retain) NSArray * autoFavoriteTagIDs;                              //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (nonatomic,retain) FCCurrentIssuesCheckerResult * partialResult;              //@synthesize partialResult=_partialResult - In the implementation block
-(NSArray *)autoFavoriteTagIDs;
-(void)setAutoFavoriteTagIDs:(NSArray *)arg1 ;
-(NSSet *)bundleChannelIDs;
-(void)setBundleChannelIDs:(NSSet *)arg1 ;
-(void)setPartialResult:(FCCurrentIssuesCheckerResult *)arg1 ;
-(NSArray *)followedChannelIDs;
-(NSArray *)resultingIssues;
-(FCCurrentIssuesCheckerResult *)partialResult;
-(void)setFollowedChannelIDs:(NSArray *)arg1 ;
-(void)setResultingIssues:(NSArray *)arg1 ;
@end

