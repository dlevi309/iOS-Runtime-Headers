/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
*/

#import <EnhancedLoggingState/EnhancedLoggingState-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, NSDictionary, NSNumber, NSUserDefaults;

@interface ELSSnapshot : NSObject <NSCopying> {

	unsigned long long _status;
	unsigned long long _consent;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _queue;
	long long _retriesRemaining;
	NSArray* _identifiersToRetry;
	NSDictionary* _metadata;
	NSNumber* _uploadCompletedPercentage;
	NSDictionary* _followUpOptions;
	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                         //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long consent;                        //@synthesize consent=_consent - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                  //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * queue;                                   //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long retriesRemaining;                        //@synthesize retriesRemaining=_retriesRemaining - In the implementation block
@property (nonatomic,retain) NSArray * identifiersToRetry;                      //@synthesize identifiersToRetry=_identifiersToRetry - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSNumber * uploadCompletedPercentage;              //@synthesize uploadCompletedPercentage=_uploadCompletedPercentage - In the implementation block
@property (nonatomic,retain) NSDictionary * followUpOptions;                    //@synthesize followUpOptions=_followUpOptions - In the implementation block
@property (nonatomic,readonly) double durationRemaining; 
@property (nonatomic,readonly) double totalDuration; 
@property (nonatomic,readonly) BOOL needsFollowup; 
@property (nonatomic,readonly) NSArray * encodedQueue; 
+(id)statusToString:(unsigned long long)arg1 ;
+(id)consentToString:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQueue:(NSArray *)arg1 ;
-(NSArray *)queue;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned long long)status;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(double)totalDuration;
-(id)JSONObject;
-(void)refreshDates;
-(void)setConsent:(unsigned long long)arg1 ;
-(void)setRetriesRemaining:(long long)arg1 ;
-(void)setIdentifiersToRetry:(NSArray *)arg1 ;
-(void)setUploadCompletedPercentage:(NSNumber *)arg1 ;
-(void)setFollowUpOptions:(NSDictionary *)arg1 ;
-(unsigned long long)consent;
-(NSArray *)encodedQueue;
-(long long)retriesRemaining;
-(NSArray *)identifiersToRetry;
-(NSNumber *)uploadCompletedPercentage;
-(NSDictionary *)followUpOptions;
-(void)refreshKeyPaths:(id)arg1 ;
-(void)refreshStatus;
-(void)refreshConsent;
-(void)refreshQueue;
-(void)refreshRetriesRemaining;
-(void)refreshIdentifiersToRetry;
-(void)refreshMetadata;
-(void)refreshUploadCompletedPercentage;
-(void)refreshFollowUpOptions;
-(id)decodeQueue:(id)arg1 ;
-(id)dictionaryRepresentationPretty:(BOOL)arg1 ;
-(double)durationRemaining;
-(BOOL)needsFollowup;
@end

