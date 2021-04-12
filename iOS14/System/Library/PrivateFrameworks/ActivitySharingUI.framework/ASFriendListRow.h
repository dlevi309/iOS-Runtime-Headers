/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/


@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject {

	ASFriend* _friend;
	_HKFitnessFriendActivitySnapshot* _snapshot;

}

@property (nonatomic,retain) ASFriend * friend;                                        //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) _HKFitnessFriendActivitySnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
-(_HKFitnessFriendActivitySnapshot *)snapshot;
-(void)setSnapshot:(_HKFitnessFriendActivitySnapshot *)arg1 ;
-(ASFriend *)friend;
-(void)setFriend:(ASFriend *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

