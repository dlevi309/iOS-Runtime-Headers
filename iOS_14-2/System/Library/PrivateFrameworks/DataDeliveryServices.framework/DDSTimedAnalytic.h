/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@class NSString;

@interface DDSTimedAnalytic : NSObject {

	BOOL _success;
	int _lastAction;
	NSString* _identifier;
	unsigned long long _retries;
	double _startTime;
	double _endTime;

}

@property (assign,nonatomic) unsigned long long retries;                      //@synthesize retries=_retries - In the implementation block
@property (assign,nonatomic) BOOL success;                                    //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) int lastAction;                                  //@synthesize lastAction=_lastAction - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long durationInSec; 
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(void)setRetries:(unsigned long long)arg1 ;
-(unsigned long long)retries;
-(void)setEndTime:(double)arg1 ;
-(NSString *)identifier;
-(double)endTime;
-(id)initWithIdentifier:(id)arg1 ;
-(double)startTime;
-(void)updateWithAction:(int)arg1 ;
-(unsigned long long)durationInSec;
-(int)lastAction;
-(void)setLastAction:(int)arg1 ;
@end

