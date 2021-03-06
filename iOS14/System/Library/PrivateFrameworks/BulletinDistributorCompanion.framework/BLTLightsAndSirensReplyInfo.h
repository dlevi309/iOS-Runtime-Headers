/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDate, NSString;

@interface BLTLightsAndSirensReplyInfo : NSObject {

	BOOL _replySent;
	BOOL _didLogAggd;
	/*^block*/id _reply;
	unsigned long long _didPlayLightsAndSirens;
	NSDate* _bulletinPublicationDate;
	NSDate* _creation;
	NSString* _publisherMatchID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) BOOL replySent;                                       //@synthesize replySent=_replySent - In the implementation block
@property (nonatomic,copy) id reply;                                                 //@synthesize reply=_reply - In the implementation block
@property (assign,nonatomic) unsigned long long didPlayLightsAndSirens;              //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
@property (nonatomic,retain) NSDate * bulletinPublicationDate;                       //@synthesize bulletinPublicationDate=_bulletinPublicationDate - In the implementation block
@property (assign,nonatomic) BOOL didLogAggd;                                        //@synthesize didLogAggd=_didLogAggd - In the implementation block
@property (nonatomic,readonly) NSDate * creation;                                    //@synthesize creation=_creation - In the implementation block
@property (nonatomic,copy) NSString * publisherMatchID;                              //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;                                     //@synthesize sectionID=_sectionID - In the implementation block
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(id)init;
-(NSString *)publisherMatchID;
-(BOOL)hasExpired;
-(NSDate *)creation;
-(id)reply;
-(BOOL)sendReply;
-(void)setReply:(id)arg1 ;
-(BOOL)replySent;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(unsigned long long)didPlayLightsAndSirens;
-(void)setDidPlayLightsAndSirens:(unsigned long long)arg1 ;
-(NSDate *)bulletinPublicationDate;
-(void)setBulletinPublicationDate:(NSDate *)arg1 ;
-(BOOL)didLogAggd;
-(void)setDidLogAggd:(BOOL)arg1 ;
@end

