/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgeReporting.framework/BridgeReporting
*/


@class NSString, BRRTCPairingReportManager;

@interface BRReportManager : NSObject {

	BOOL _pairingReportUnderway;
	unsigned short _category;
	NSString* _configuration;
	BRRTCPairingReportManager* _pairingReportManager;

}

@property (assign,nonatomic) unsigned short category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) BRRTCPairingReportManager * pairingReportManager;              //@synthesize pairingReportManager=_pairingReportManager - In the implementation block
@property (assign,nonatomic) BOOL pairingReportUnderway;                                           //@synthesize pairingReportUnderway=_pairingReportUnderway - In the implementation block
+(id)reporterWithCatergory:(unsigned short)arg1 ;
-(void)setCategory:(unsigned short)arg1 ;
-(unsigned short)category;
-(NSString *)configuration;
-(id)initWithCategory:(unsigned short)arg1 ;
-(void)setConfiguration:(NSString *)arg1 ;
-(void)reportRTCMetric:(id)arg1 ;
-(id)categortyToConfiguration:(unsigned short)arg1 ;
-(BRRTCPairingReportManager *)pairingReportManager;
-(void)setPairingReportManager:(BRRTCPairingReportManager *)arg1 ;
-(BOOL)pairingReportUnderway;
-(void)setPairingReportUnderway:(BOOL)arg1 ;
@end

