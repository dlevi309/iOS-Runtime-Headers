/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject {

	BBBulletin* _bulletin;
	unsigned long long _feeds;

}

@property (nonatomic,retain) BBBulletin * bulletin;                 //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
-(void)setBulletin:(BBBulletin *)arg1 ;
-(BBBulletin *)bulletin;
-(unsigned long long)feeds;
-(void)setFeeds:(unsigned long long)arg1 ;
@end

