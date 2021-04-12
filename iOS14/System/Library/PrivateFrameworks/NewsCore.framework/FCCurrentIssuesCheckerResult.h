/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSError;

@interface FCCurrentIssuesCheckerResult : NSObject {

	NSArray* _followedIssues;
	NSArray* _unreadFollowedIssues;
	NSArray* _autoFavoriteIssues;
	NSArray* _unbadgedIssues;
	NSArray* _seenIssues;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * followedIssues;                    //@synthesize followedIssues=_followedIssues - In the implementation block
@property (nonatomic,retain) NSArray * unreadFollowedIssues;              //@synthesize unreadFollowedIssues=_unreadFollowedIssues - In the implementation block
@property (nonatomic,retain) NSArray * autoFavoriteIssues;                //@synthesize autoFavoriteIssues=_autoFavoriteIssues - In the implementation block
@property (nonatomic,retain) NSArray * unbadgedIssues;                    //@synthesize unbadgedIssues=_unbadgedIssues - In the implementation block
@property (nonatomic,retain) NSArray * seenIssues;                        //@synthesize seenIssues=_seenIssues - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSArray *)seenIssues;
-(NSArray *)followedIssues;
-(NSArray *)unbadgedIssues;
-(NSArray *)unreadFollowedIssues;
-(void)setFollowedIssues:(NSArray *)arg1 ;
-(void)setSeenIssues:(NSArray *)arg1 ;
-(void)setAutoFavoriteIssues:(NSArray *)arg1 ;
-(NSArray *)autoFavoriteIssues;
-(void)setUnreadFollowedIssues:(NSArray *)arg1 ;
-(void)setUnbadgedIssues:(NSArray *)arg1 ;
@end

