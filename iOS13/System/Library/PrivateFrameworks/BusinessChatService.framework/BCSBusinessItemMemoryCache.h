/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class BCSBusinessItem, NSData;

@interface BCSBusinessItemMemoryCache : NSObject {

	BCSBusinessItem* _lastFetchedBusinessItem;
	BCSBusinessItem* _bizItemForLastFetchedIcon;
	NSData* _lastFetchedBusinessItemIconData;

}

@property (nonatomic,retain) BCSBusinessItem * bizItemForLastFetchedIcon;              //@synthesize bizItemForLastFetchedIcon=_bizItemForLastFetchedIcon - In the implementation block
@property (nonatomic,retain) NSData * lastFetchedBusinessItemIconData;                 //@synthesize lastFetchedBusinessItemIconData=_lastFetchedBusinessItemIconData - In the implementation block
@property (nonatomic,retain) BCSBusinessItem * lastFetchedBusinessItem;                //@synthesize lastFetchedBusinessItem=_lastFetchedBusinessItem - In the implementation block
+(id)sharedCache;
-(void)deleteCache;
-(BCSBusinessItem *)bizItemForLastFetchedIcon;
-(NSData *)lastFetchedBusinessItemIconData;
-(void)setLastFetchedBusinessItem:(BCSBusinessItem *)arg1 ;
-(void)setLastFetchedBusinessItemIconData:(NSData *)arg1 ;
-(id)lastFetchedBusinessItemIconDataForBizItem:(id)arg1 ;
-(void)setLastFetchedBusinesIconData:(id)arg1 withMatchingBusinessItem:(id)arg2 ;
-(BCSBusinessItem *)lastFetchedBusinessItem;
-(void)setBizItemForLastFetchedIcon:(BCSBusinessItem *)arg1 ;
@end

