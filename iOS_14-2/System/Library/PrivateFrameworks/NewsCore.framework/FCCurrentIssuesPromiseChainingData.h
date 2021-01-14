/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBundleChannelIDs:(NSSet *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSArray *)arg1 ;
-(NSSet *)bundleChannelIDs;
-(NSArray *)autoFavoriteTagIDs;
-(FCCurrentIssuesCheckerResult *)partialResult;
-(void)setPartialResult:(FCCurrentIssuesCheckerResult *)arg1 ;
-(NSArray *)followedChannelIDs;
-(NSArray *)resultingIssues;
-(void)setFollowedChannelIDs:(NSArray *)arg1 ;
-(void)setResultingIssues:(NSArray *)arg1 ;
@end

