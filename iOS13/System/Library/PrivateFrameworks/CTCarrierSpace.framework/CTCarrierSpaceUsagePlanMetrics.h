/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlanLabel:(NSString *)arg1 ;
-(NSString *)planLabel;
-(CTCarrierSpaceUsagePlanItemData *)dataUsage;
-(long long)planCategory;
-(BOOL)currentUsedPlan;
-(CTCarrierSpaceUsagePlanItemMessages *)messages;
-(CTCarrierSpaceUsagePlanItemVoice *)voice;
-(NSString *)remainingBalance;
-(BOOL)throttled;
-(NSDate *)lastUpdatedAt;
-(void)setPlanCategory:(long long)arg1 ;
-(void)setCurrentUsedPlan:(BOOL)arg1 ;
-(void)setDataUsage:(CTCarrierSpaceUsagePlanItemData *)arg1 ;
-(void)setMessages:(CTCarrierSpaceUsagePlanItemMessages *)arg1 ;
-(void)setVoice:(CTCarrierSpaceUsagePlanItemVoice *)arg1 ;
-(void)setRemainingBalance:(NSString *)arg1 ;
-(void)setThrottled:(BOOL)arg1 ;
-(void)setLastUpdatedAt:(NSDate *)arg1 ;
@end

