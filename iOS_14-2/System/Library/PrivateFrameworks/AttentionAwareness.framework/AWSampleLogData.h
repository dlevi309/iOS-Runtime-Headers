/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@class NSString;

@interface AWSampleLogData : NSObject {

	BOOL _pollingClient;
	NSString* _identifier;
	unsigned long long _samplingInterval;
	unsigned long long _cumulativeSamplingTime;
	unsigned long long _samplingStartTime;

}

@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long samplingInterval;                    //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (assign,nonatomic) BOOL pollingClient;                                     //@synthesize pollingClient=_pollingClient - In the implementation block
@property (assign,nonatomic) unsigned long long cumulativeSamplingTime;              //@synthesize cumulativeSamplingTime=_cumulativeSamplingTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplingStartTime;                   //@synthesize samplingStartTime=_samplingStartTime - In the implementation block
-(unsigned long long)samplingInterval;
-(void)setSamplingInterval:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)pollingClient;
-(void)setPollingClient:(BOOL)arg1 ;
-(unsigned long long)cumulativeSamplingTime;
-(void)setCumulativeSamplingTime:(unsigned long long)arg1 ;
-(unsigned long long)samplingStartTime;
-(void)setSamplingStartTime:(unsigned long long)arg1 ;
@end

