/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(WLKChannelDetails *)details;
-(NSString *)ID;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)punchoutUrls;
-(NSArray *)seasonNumbers;
-(NSArray *)subscriptionOffers;
@end

