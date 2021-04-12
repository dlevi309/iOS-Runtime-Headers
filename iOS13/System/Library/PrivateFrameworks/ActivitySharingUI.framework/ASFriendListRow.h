/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/


@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject {

	ASFriend* _friend;
	_HKFitnessFriendActivitySnapshot* _snapshot;

}

@property (nonatomic,retain) ASFriend * friend;                                        //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) _HKFitnessFriendActivitySnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(_HKFitnessFriendActivitySnapshot *)snapshot;
-(void)setSnapshot:(_HKFitnessFriendActivitySnapshot *)arg1 ;
-(ASFriend *)friend;
-(void)setFriend:(ASFriend *)arg1 ;
@end

