/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCarrierSpaceUsagePlanItemData, CTCarrierSpaceUsagePlanItemMessages, CTCarrierSpaceUsagePlanItemVoice, NSDate;

@interface CTCarrierSpaceUsagePlanMetrics : NSObject <NSSecureCoding> {

	BOOL _currentUsedPlan;
	BOOL _throttled;
	NSString* _planLabel;
	long long _planCategory;
	CTCarrierSpaceUsagePlanItemData* _dataUsage;
	CTCarrierSpaceUsagePlanItemMessages* _messages;
	CTCarrierSpaceUsagePlanItemVoice* _voice;
	NSString* _remainingBalance;
	NSDate* _lastUpdatedAt;

}

@property (nonatomic,retain) NSString * planLabel;                                        //@synthesize planLabel=_planLabel - In the implementation block
@property (assign,nonatomic) long long planCategory;                                      //@synthesize planCategory=_planCategory - In the implementation block
@property (assign,nonatomic) BOOL currentUsedPlan;                                        //@synthesize currentUsedPlan=_currentUsedPlan - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemData * dataUsage;                 //@synthesize dataUsage=_dataUsage - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemMessages * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemVoice * voice;                    //@synthesize voice=_voice - In the implementation block
@property (nonatomic,retain) NSString * remainingBalance;                                 //@synthesize remainingBalance=_remainingBalance - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                              //@synthesize throttled=_throttled - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedAt;                                      //@synthesize lastUpdatedAt=_lastUpdatedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(CTCarrierSpaceUsagePlanItemVoice *)voice;
-(NSString *)planLabel;
-(void)setVoice:(CTCarrierSpaceUsagePlanItemVoice *)arg1 ;
-(long long)planCategory;
-(void)setMessages:(CTCarrierSpaceUsagePlanItemMessages *)arg1 ;
-(NSDate *)lastUpdatedAt;
-(void)setPlanLabel:(NSString *)arg1 ;
-(void)setDataUsage:(CTCarrierSpaceUsagePlanItemData *)arg1 ;
-(BOOL)currentUsedPlan;
-(NSString *)remainingBalance;
-(void)setPlanCategory:(long long)arg1 ;
-(void)setLastUpdatedAt:(NSDate *)arg1 ;
-(void)setRemainingBalance:(NSString *)arg1 ;
-(id)init;
-(CTCarrierSpaceUsagePlanItemData *)dataUsage;
-(void)setCurrentUsedPlan:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)throttled;
-(id)description;
-(CTCarrierSpaceUsagePlanItemMessages *)messages;
-(id)initWithCoder:(id)arg1 ;
-(void)setThrottled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

