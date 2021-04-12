/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class BCSConfigItem, NSURL;

@interface BCSMegashard : NSObject {

	BCSConfigItem* _configItem;
	NSURL* _bloomFilterURL;

}

@property (nonatomic,retain) BCSConfigItem * configItem;              //@synthesize configItem=_configItem - In the implementation block
@property (nonatomic,retain) NSURL * bloomFilterURL;                  //@synthesize bloomFilterURL=_bloomFilterURL - In the implementation block
-(id)initWithRecord:(id)arg1 type:(long long)arg2 ;
-(void)setConfigItem:(BCSConfigItem *)arg1 ;
-(void)setBloomFilterURL:(NSURL *)arg1 ;
-(BCSConfigItem *)configItem;
-(NSURL *)bloomFilterURL;
@end

