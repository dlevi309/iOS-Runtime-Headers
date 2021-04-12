/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSDate;

@interface BBDismissalItem : NSObject {

	unsigned long long _feeds;
	NSDate* _expiration;

}

@property (nonatomic,readonly) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;                   //@synthesize expiration=_expiration - In the implementation block
-(id)description;
-(NSDate *)expiration;
-(BOOL)hasExpired;
-(id)initWithFeeds:(unsigned long long)arg1 ;
-(void)addFeeds:(unsigned long long)arg1 ;
-(unsigned long long)feeds;
@end

