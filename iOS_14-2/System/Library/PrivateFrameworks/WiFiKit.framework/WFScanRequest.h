/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class NSString, NSArray;

@interface WFScanRequest : NSObject {

	BOOL _applyRssiThresholdFilter;
	BOOL _includeBSSList;
	BOOL _lowPriorityScan;
	NSString* _ssid;
	unsigned long long _dwellTime;
	NSArray* _channels;
	long long _rssiThreshold;

}

@property (nonatomic,copy) NSString * ssid;                        //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,retain) NSArray * channels;                   //@synthesize channels=_channels - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;              //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign) BOOL applyRssiThresholdFilter;                  //@synthesize applyRssiThresholdFilter=_applyRssiThresholdFilter - In the implementation block
@property (assign) unsigned long long dwellTime;                   //@synthesize dwellTime=_dwellTime - In the implementation block
@property (assign) BOOL includeBSSList;                            //@synthesize includeBSSList=_includeBSSList - In the implementation block
@property (assign) BOOL lowPriorityScan;                           //@synthesize lowPriorityScan=_lowPriorityScan - In the implementation block
+(id)scanRequestForSSID:(id)arg1 channels:(id)arg2 ;
+(id)scanRequestForChannels:(id)arg1 ;
-(long long)rssiThreshold;
-(void)setRssiThreshold:(long long)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(id)init;
-(void)setDwellTime:(unsigned long long)arg1 ;
-(NSString *)ssid;
-(id)description;
-(void)setChannels:(NSArray *)arg1 ;
-(unsigned long long)dwellTime;
-(NSArray *)channels;
-(id)cScanParameters;
-(id)scanParameters;
-(void)setIncludeBSSList:(BOOL)arg1 ;
-(void)setLowPriorityScan:(BOOL)arg1 ;
-(void)setApplyRssiThresholdFilter:(BOOL)arg1 ;
-(id)initWithSSID:(id)arg1 channels:(id)arg2 ;
-(id)_defaultScanDictionary;
-(BOOL)applyRssiThresholdFilter;
-(BOOL)includeBSSList;
-(BOOL)lowPriorityScan;
-(id)_channelListFromArrayOfChannels:(id)arg1 ;
@end

