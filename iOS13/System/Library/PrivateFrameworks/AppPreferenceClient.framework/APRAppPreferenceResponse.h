/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXResponse, NSString, NSArray;

@interface APRAppPreferenceResponse : NSObject <NSSecureCoding> {

	ATXResponse* _atxResponse;
	NSString* _ABGroup;
	NSString* _intentType;
	unsigned long long _experience;
	unsigned long long _feedbackSource;
	unsigned long long _engagementType;
	NSString* _engagedBundleId;

}

@property (nonatomic,retain) NSString * intentType;                            //@synthesize intentType=_intentType - In the implementation block
@property (assign,nonatomic) unsigned long long experience;                    //@synthesize experience=_experience - In the implementation block
@property (nonatomic,readonly) ATXResponse * atxResponse;                      //@synthesize atxResponse=_atxResponse - In the implementation block
@property (nonatomic,readonly) NSString * ABGroup;                             //@synthesize ABGroup=_ABGroup - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIds; 
@property (nonatomic,readonly) unsigned long long feedbackSource;              //@synthesize feedbackSource=_feedbackSource - In the implementation block
@property (nonatomic,readonly) unsigned long long engagementType;              //@synthesize engagementType=_engagementType - In the implementation block
@property (nonatomic,readonly) NSString * engagedBundleId;                     //@synthesize engagedBundleId=_engagedBundleId - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)intentType;
-(id)jsonDescription;
-(id)sessionId;
-(NSArray *)bundleIds;
-(void)setIntentType:(NSString *)arg1 ;
-(id)jsonData;
-(id)json;
-(unsigned long long)engagementType;
-(id)initWithAtxResponse:(id)arg1 abGroup:(id)arg2 experience:(unsigned long long)arg3 intentType:(id)arg4 ;
-(BOOL)isEqualToAppPreferenceResponse:(id)arg1 ;
-(void)updateFeedbackSource:(unsigned long long)arg1 engagementType:(unsigned long long)arg2 engagedBundleId:(id)arg3 ;
-(void)updateExperience:(unsigned long long)arg1 ;
-(ATXResponse *)atxResponse;
-(NSString *)ABGroup;
-(unsigned long long)experience;
-(void)setExperience:(unsigned long long)arg1 ;
-(unsigned long long)feedbackSource;
-(NSString *)engagedBundleId;
@end

