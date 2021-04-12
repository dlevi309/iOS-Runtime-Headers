/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/


@class NSString, NSUUID, C2MetricOptions;

@interface C2MetricRequestOptions : NSObject {

	unsigned char __allowsExpensiveAccess;
	unsigned char __allowsPowerNapScheduling;
	NSString* __sourceApplicationBundleIdentifier;
	NSString* __sourceApplicationSecondaryIdentifier;
	NSUUID* _metricUUID;
	C2MetricOptions* _metricOptions;

}

@property (assign,nonatomic) unsigned char _allowsExpensiveAccess;                          //@synthesize _allowsExpensiveAccess=__allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) unsigned char _allowsPowerNapScheduling;                       //@synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling - In the implementation block
@property (nonatomic,retain) NSString * _sourceApplicationBundleIdentifier;                 //@synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * _sourceApplicationSecondaryIdentifier;              //@synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * metricUUID;                                           //@synthesize metricUUID=_metricUUID - In the implementation block
@property (nonatomic,retain) C2MetricOptions * metricOptions;                               //@synthesize metricOptions=_metricOptions - In the implementation block
-(id)init;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)_sourceApplicationBundleIdentifier;
-(unsigned char)_allowsPowerNapScheduling;
-(unsigned char)_allowsExpensiveAccess;
-(void)set_allowsExpensiveAccess:(unsigned char)arg1 ;
-(void)set_allowsPowerNapScheduling:(unsigned char)arg1 ;
-(NSUUID *)metricUUID;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(C2MetricOptions *)metricOptions;
-(void)setMetricUUID:(NSUUID *)arg1 ;
-(id)initWithRequestOptions:(id)arg1 ;
-(id)metricRequestTransportOptions;
@end

