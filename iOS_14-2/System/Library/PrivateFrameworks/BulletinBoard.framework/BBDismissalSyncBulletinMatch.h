/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSString, BBDismissalItem;

@interface BBDismissalSyncBulletinMatch : NSObject {

	NSString* _sectionID;
	BBDismissalItem* _dismissalItem;
	NSString* _dismissalID;
	unsigned long long _feeds;

}

@property (nonatomic,copy) NSString * sectionID;                           //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) BBDismissalItem * dismissalItem;              //@synthesize dismissalItem=_dismissalItem - In the implementation block
@property (nonatomic,copy) NSString * dismissalID;                         //@synthesize dismissalID=_dismissalID - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;                     //@synthesize feeds=_feeds - In the implementation block
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(unsigned long long)feeds;
-(id)description;
-(id)initWithDismissalID:(id)arg1 andItem:(id)arg2 ;
-(id)initWithDismissalDictionaryItem:(id)arg1 ;
-(BBDismissalItem *)dismissalItem;
-(void)setDismissalItem:(BBDismissalItem *)arg1 ;
-(NSString *)dismissalID;
-(void)setDismissalID:(NSString *)arg1 ;
-(void)setFeeds:(unsigned long long)arg1 ;
@end

