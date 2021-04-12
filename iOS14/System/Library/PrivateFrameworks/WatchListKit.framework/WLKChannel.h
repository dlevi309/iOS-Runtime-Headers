/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, WLKChannelDetails, NSDictionary, NSArray;

@interface WLKChannel : NSObject {

	NSString* _ID;
	WLKChannelDetails* _details;
	NSDictionary* _punchoutUrls;
	NSArray* _seasonNumbers;
	NSArray* _subscriptionOffers;

}

@property (nonatomic,copy,readonly) NSString * ID;                             //@synthesize ID=_ID - In the implementation block
@property (nonatomic,copy,readonly) WLKChannelDetails * details;               //@synthesize details=_details - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * punchoutUrls;               //@synthesize punchoutUrls=_punchoutUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * seasonNumbers;                   //@synthesize seasonNumbers=_seasonNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subscriptionOffers;              //@synthesize subscriptionOffers=_subscriptionOffers - In the implementation block
+(id)channelsWithDictionaries:(id)arg1 context:(id)arg2 ;
-(NSString *)ID;
-(id)init;
-(NSDictionary *)punchoutUrls;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)seasonNumbers;
-(NSArray *)subscriptionOffers;
-(WLKChannelDetails *)details;
@end

