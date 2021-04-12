/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)metricRequestTransportOptions;
-(id)init;
-(void)setMetricUUID:(NSUUID *)arg1 ;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSUUID *)metricUUID;
-(void)set_allowsExpensiveAccess:(unsigned char)arg1 ;
-(unsigned char)_allowsPowerNapScheduling;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(void)set_allowsPowerNapScheduling:(unsigned char)arg1 ;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(NSString *)_sourceApplicationBundleIdentifier;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)initWithRequestOptions:(id)arg1 ;
-(C2MetricOptions *)metricOptions;
-(unsigned char)_allowsExpensiveAccess;
@end

