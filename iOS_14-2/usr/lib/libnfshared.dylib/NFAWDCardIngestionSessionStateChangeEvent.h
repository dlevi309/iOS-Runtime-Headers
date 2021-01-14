/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCCardIngestionSessionStateChangeEvent, NSString;

@interface NFAWDCardIngestionSessionStateChangeEvent : NSObject <NFAWDEventProtocol> {

	unsigned _state;
	unsigned _technology;
	unsigned _spStatusCode;
	unsigned _cardValidationStatus;
	unsigned _sessionStatus;
	AWDNFCCardIngestionSessionStateChangeEvent* _metric;

}

@property (assign,nonatomic) unsigned state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned technology;                                              //@synthesize technology=_technology - In the implementation block
@property (assign,nonatomic) unsigned spStatusCode;                                            //@synthesize spStatusCode=_spStatusCode - In the implementation block
@property (assign,nonatomic) unsigned cardValidationStatus;                                    //@synthesize cardValidationStatus=_cardValidationStatus - In the implementation block
@property (assign,nonatomic) unsigned sessionStatus;                                           //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,retain) AWDNFCCardIngestionSessionStateChangeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCCardIngestionSessionStateChangeEvent *)metric;
-(id)getMetric;
-(void)setState:(unsigned)arg1 ;
-(unsigned)sessionStatus;
-(void)setSessionStatus:(unsigned)arg1 ;
-(unsigned)state;
-(unsigned)technology;
-(void)setTechnology:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCCardIngestionSessionStateChangeEvent *)arg1 ;
-(void)setSpStatusCode:(unsigned)arg1 ;
-(void)setCardValidationStatus:(unsigned)arg1 ;
-(unsigned)spStatusCode;
-(unsigned)cardValidationStatus;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1 ;
@end

