/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCChannelUpsellTrigger : NSObject {

	unsigned long long _triggerMethod;
	long long _triggerCount;
	NSString* _subscriberUpsellArticleID;
	NSString* _nonSubscriberUpsellArticleID;

}

@property (assign,nonatomic) unsigned long long triggerMethod;                   //@synthesize triggerMethod=_triggerMethod - In the implementation block
@property (assign,nonatomic) long long triggerCount;                             //@synthesize triggerCount=_triggerCount - In the implementation block
@property (nonatomic,copy) NSString * subscriberUpsellArticleID;                 //@synthesize subscriberUpsellArticleID=_subscriberUpsellArticleID - In the implementation block
@property (nonatomic,copy) NSString * nonSubscriberUpsellArticleID;              //@synthesize nonSubscriberUpsellArticleID=_nonSubscriberUpsellArticleID - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setTriggerCount:(long long)arg1 ;
-(NSString *)subscriberUpsellArticleID;
-(void)setSubscriberUpsellArticleID:(NSString *)arg1 ;
-(NSString *)nonSubscriberUpsellArticleID;
-(void)setNonSubscriberUpsellArticleID:(NSString *)arg1 ;
-(long long)triggerCount;
-(unsigned long long)triggerMethod;
-(void)setTriggerMethod:(unsigned long long)arg1 ;
@end

