/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSError;

@interface FCCurrentIssuesCheckerResult : NSObject {

	NSArray* _followedIssues;
	NSArray* _unreadFollowedIssues;
	NSArray* _autoFavoriteIssues;
	NSArray* _unbadgedIssues;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * followedIssues;                    //@synthesize followedIssues=_followedIssues - In the implementation block
@property (nonatomic,retain) NSArray * unreadFollowedIssues;              //@synthesize unreadFollowedIssues=_unreadFollowedIssues - In the implementation block
@property (nonatomic,retain) NSArray * autoFavoriteIssues;                //@synthesize autoFavoriteIssues=_autoFavoriteIssues - In the implementation block
@property (nonatomic,retain) NSArray * unbadgedIssues;                    //@synthesize unbadgedIssues=_unbadgedIssues - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)followedIssues;
-(NSArray *)unreadFollowedIssues;
-(void)setFollowedIssues:(NSArray *)arg1 ;
-(void)setAutoFavoriteIssues:(NSArray *)arg1 ;
-(NSArray *)autoFavoriteIssues;
-(void)setUnreadFollowedIssues:(NSArray *)arg1 ;
-(void)setUnbadgedIssues:(NSArray *)arg1 ;
-(NSArray *)unbadgedIssues;
@end

