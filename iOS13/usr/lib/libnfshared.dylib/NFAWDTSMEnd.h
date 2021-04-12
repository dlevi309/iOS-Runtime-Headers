/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCTSMEndEvent, NSData, NSString;

@interface NFAWDTSMEnd : NSObject <NFAWDEventProtocol> {

	BOOL _authEnabled;
	BOOL _mfdEnabled;
	BOOL _restrictedModeExit;
	unsigned _status;
	unsigned _lifeCycleState;
	AWDNFCTSMEndEvent* _metric;

}

@property (assign,nonatomic) unsigned status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL authEnabled;                        //@synthesize authEnabled=_authEnabled - In the implementation block
@property (assign,nonatomic) BOOL mfdEnabled;                         //@synthesize mfdEnabled=_mfdEnabled - In the implementation block
@property (assign,nonatomic) unsigned lifeCycleState;                 //@synthesize lifeCycleState=_lifeCycleState - In the implementation block
@property (assign,nonatomic) BOOL restrictedModeExit;                 //@synthesize restrictedModeExit=_restrictedModeExit - In the implementation block
@property (nonatomic,retain) NSData * aid; 
@property (nonatomic,retain) NSData * discretionaryData; 
@property (nonatomic,retain) AWDNFCTSMEndEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)status;
-(AWDNFCTSMEndEvent *)metric;
-(void)setMetric:(AWDNFCTSMEndEvent *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(NSData *)discretionaryData;
-(void)setDiscretionaryData:(NSData *)arg1 ;
-(void)setAid:(NSData *)arg1 ;
-(NSData *)aid;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(void)setAuthEnabled:(BOOL)arg1 ;
-(void)setMfdEnabled:(BOOL)arg1 ;
-(void)setLifeCycleState:(unsigned)arg1 ;
-(void)setRestrictedModeExit:(BOOL)arg1 ;
-(BOOL)authEnabled;
-(BOOL)mfdEnabled;
-(unsigned)lifeCycleState;
-(BOOL)restrictedModeExit;
@end

