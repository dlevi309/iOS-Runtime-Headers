/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject {

	_CDRateLimiter* _rateLimiter;
	unsigned long long _lifespanInSeconds;
	unsigned long long _maxNumberStored;
	unsigned long long _timeResolutionInSeconds;
	unsigned long long _maxNumberOfRecipients;
	unsigned long long _maxNumberOfKeywords;
	unsigned long long _maxNumberOfAttachments;

}

@property (retain) _CDRateLimiter * rateLimiter;                            //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (assign) unsigned long long lifespanInSeconds;                    //@synthesize lifespanInSeconds=_lifespanInSeconds - In the implementation block
@property (assign) unsigned long long maxNumberStored;                      //@synthesize maxNumberStored=_maxNumberStored - In the implementation block
@property (assign) unsigned long long timeResolutionInSeconds;              //@synthesize timeResolutionInSeconds=_timeResolutionInSeconds - In the implementation block
@property (assign) unsigned long long maxNumberOfRecipients;                //@synthesize maxNumberOfRecipients=_maxNumberOfRecipients - In the implementation block
@property (assign) unsigned long long maxNumberOfKeywords;                  //@synthesize maxNumberOfKeywords=_maxNumberOfKeywords - In the implementation block
@property (assign) unsigned long long maxNumberOfAttachments;               //@synthesize maxNumberOfAttachments=_maxNumberOfAttachments - In the implementation block
+(id)specialPolicyForFirstPartyApps;
+(unsigned long long)defaultLifespan;
+(unsigned long long)defaultMaxNumberOfKeywords;
+(id)policyFromDictionary:(id)arg1 ;
+(id)defaultPolicyForMeetings;
+(unsigned long long)defaultMaxNumberOfRecipients;
+(id)policyWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7 ;
+(id)defaultPolicyForMessages;
+(id)defaultPolicyForCalls;
+(unsigned long long)defaultMaxNumberOfAttachments;
+(id)defaultPolicy;
+(unsigned long long)defaultTimeResolutionInSeconds;
+(id)defaultPolicyForEmail;
+(unsigned long long)defaultMaxNumberStored;
-(_CDRateLimiter *)rateLimiter;
-(void)setMaxNumberOfRecipients:(unsigned long long)arg1 ;
-(void)setMaxNumberStored:(unsigned long long)arg1 ;
-(void)setLifespanInSeconds:(unsigned long long)arg1 ;
-(id)description;
-(void)setTimeResolutionInSeconds:(unsigned long long)arg1 ;
-(void)setMaxNumberOfKeywords:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfAttachments;
-(id)initWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7 ;
-(unsigned long long)maxNumberStored;
-(unsigned long long)maxNumberOfRecipients;
-(void)setMaxNumberOfAttachments:(unsigned long long)arg1 ;
-(void)setRateLimiter:(_CDRateLimiter *)arg1 ;
-(unsigned long long)timeResolutionInSeconds;
-(unsigned long long)maxNumberOfKeywords;
-(unsigned long long)lifespanInSeconds;
@end

