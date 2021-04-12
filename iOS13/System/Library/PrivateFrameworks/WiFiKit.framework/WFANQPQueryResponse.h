/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class WFNetworkProfile, NSArray, NSString;

@interface WFANQPQueryResponse : NSObject {

	WFNetworkProfile* _profile;
	NSArray* _cellNetworkInfo;
	NSArray* _roamingConsortium;
	NSArray* _domains;
	NSString* _ssid;
	NSString* _bssid;
	NSString* _operatorName;
	long long _channel;

}

@property (nonatomic,copy) NSArray * cellNetworkInfo;                  //@synthesize cellNetworkInfo=_cellNetworkInfo - In the implementation block
@property (nonatomic,retain) NSArray * roamingConsortium;              //@synthesize roamingConsortium=_roamingConsortium - In the implementation block
@property (nonatomic,retain) NSArray * domains;                        //@synthesize domains=_domains - In the implementation block
@property (nonatomic,copy) WFNetworkProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * ssid;                            //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * bssid;                           //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSString * operatorName;                    //@synthesize operatorName=_operatorName - In the implementation block
@property (assign) long long channel;                                  //@synthesize channel=_channel - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(long long)channel;
-(NSArray *)domains;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setChannel:(long long)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(void)setDomains:(NSArray *)arg1 ;
-(NSString *)operatorName;
-(void)setOperatorName:(NSString *)arg1 ;
-(id)initWithProfile:(id)arg1 ANQPResponse:(id)arg2 ;
-(BOOL)isEqualToWFANQPResponse:(id)arg1 ;
-(NSArray *)cellNetworkInfo;
-(void)setCellNetworkInfo:(NSArray *)arg1 ;
-(NSArray *)roamingConsortium;
-(void)setRoamingConsortium:(NSArray *)arg1 ;
@end

