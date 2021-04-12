/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject {

	BBBulletin* _bulletin;
	unsigned long long _feeds;

}

@property (nonatomic,retain) BBBulletin * bulletin;                 //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
-(unsigned long long)feeds;
-(BBBulletin *)bulletin;
-(void)setFeeds:(unsigned long long)arg1 ;
-(void)setBulletin:(BBBulletin *)arg1 ;
@end

