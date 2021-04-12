/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSERestrictedModeEnteredEvent, NSData, NSString;

@interface NFAWDSERestrictedModeEntered : NSObject <NFAWDEventProtocol> {

	unsigned _hardwareType;
	AWDNFCSERestrictedModeEnteredEvent* _metric;

}

@property (assign,nonatomic) unsigned hardwareType;                                    //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) BOOL contactlessMode; 
@property (nonatomic,retain) NSData * restrictedModeID; 
@property (nonatomic,retain) NSString * platformIdentifier; 
@property (nonatomic,retain) NSData * attackLog; 
@property (nonatomic,retain) AWDNFCSERestrictedModeEnteredEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(AWDNFCSERestrictedModeEnteredEvent *)metric;
-(void)setMetric:(AWDNFCSERestrictedModeEnteredEvent *)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(NSString *)platformIdentifier;
-(void)setPlatformIdentifier:(NSString *)arg1 ;
-(void)setAttackLog:(NSData *)arg1 ;
-(NSData *)attackLog;
-(unsigned)getMetricId;
-(id)getMetric;
-(BOOL)contactlessMode;
-(void)setContactlessMode:(BOOL)arg1 ;
-(NSData *)restrictedModeID;
-(void)setRestrictedModeID:(NSData *)arg1 ;
@end

