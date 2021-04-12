/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTSweetgumUsagePlanItemData, CTSweetgumUsagePlanItemMessages, CTSweetgumUsagePlanItemVoice, NSDate;

@interface CTSweetgumUsagePlanMetrics : NSObject <NSSecureCoding> {

	BOOL _currentUsedPlan;
	BOOL _throttled;
	NSString* _planLabel;
	long long _planCategory;
	CTSweetgumUsagePlanItemData* _dataUsage;
	CTSweetgumUsagePlanItemMessages* _messages;
	CTSweetgumUsagePlanItemVoice* _voice;
	NSString* _remainingBalance;
	NSDate* _lastUpdatedAt;

}

@property (nonatomic,retain) NSString * planLabel;                                    //@synthesize planLabel=_planLabel - In the implementation block
@property (assign,nonatomic) long long planCategory;                                  //@synthesize planCategory=_planCategory - In the implementation block
@property (assign,nonatomic) BOOL currentUsedPlan;                                    //@synthesize currentUsedPlan=_currentUsedPlan - In the implementation block
@property (nonatomic,retain) CTSweetgumUsagePlanItemData * dataUsage;                 //@synthesize dataUsage=_dataUsage - In the implementation block
@property (nonatomic,retain) CTSweetgumUsagePlanItemMessages * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) CTSweetgumUsagePlanItemVoice * voice;                    //@synthesize voice=_voice - In the implementation block
@property (nonatomic,retain) NSString * remainingBalance;                             //@synthesize remainingBalance=_remainingBalance - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                          //@synthesize throttled=_throttled - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedAt;                                  //@synthesize lastUpdatedAt=_lastUpdatedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlanLabel:(NSString *)arg1 ;
-(NSString *)planLabel;
-(CTSweetgumUsagePlanItemData *)dataUsage;
-(long long)planCategory;
-(BOOL)currentUsedPlan;
-(CTSweetgumUsagePlanItemMessages *)messages;
-(CTSweetgumUsagePlanItemVoice *)voice;
-(NSString *)remainingBalance;
-(BOOL)throttled;
-(NSDate *)lastUpdatedAt;
-(void)setPlanCategory:(long long)arg1 ;
-(void)setCurrentUsedPlan:(BOOL)arg1 ;
-(void)setDataUsage:(CTSweetgumUsagePlanItemData *)arg1 ;
-(void)setMessages:(CTSweetgumUsagePlanItemMessages *)arg1 ;
-(void)setVoice:(CTSweetgumUsagePlanItemVoice *)arg1 ;
-(void)setRemainingBalance:(NSString *)arg1 ;
-(void)setThrottled:(BOOL)arg1 ;
-(void)setLastUpdatedAt:(NSDate *)arg1 ;
@end

