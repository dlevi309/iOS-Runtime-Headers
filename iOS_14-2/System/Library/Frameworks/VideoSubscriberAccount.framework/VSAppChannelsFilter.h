/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSSet, NSArray;

@interface VSAppChannelsFilter : NSObject {

	NSSet* _personalChannelIDs;
	NSArray* _allChannelMappings;
	NSSet* _personalAppAdamIDs;
	NSSet* _genericAppAdamIDs;

}

@property (nonatomic,copy) NSSet * genericAppAdamIDs;                 //@synthesize genericAppAdamIDs=_genericAppAdamIDs - In the implementation block
@property (nonatomic,copy) NSSet * personalAppAdamIDs;                //@synthesize personalAppAdamIDs=_personalAppAdamIDs - In the implementation block
@property (nonatomic,copy) NSSet * personalChannelIDs;                //@synthesize personalChannelIDs=_personalChannelIDs - In the implementation block
@property (nonatomic,copy) NSArray * allChannelMappings;              //@synthesize allChannelMappings=_allChannelMappings - In the implementation block
-(id)init;
-(NSArray *)allChannelMappings;
-(NSSet *)personalChannelIDs;
-(void)setPersonalAppAdamIDs:(NSSet *)arg1 ;
-(void)setGenericAppAdamIDs:(NSSet *)arg1 ;
-(void)_updateAdamIDs;
-(void)setPersonalChannelIDs:(NSSet *)arg1 ;
-(void)setAllChannelMappings:(NSArray *)arg1 ;
-(NSSet *)personalAppAdamIDs;
-(NSSet *)genericAppAdamIDs;
@end

