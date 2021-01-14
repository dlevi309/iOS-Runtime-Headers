/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, ASDBetaAppVersion;

@interface ASDBetaAppFeedback : NSObject <NSSecureCoding> {

	unsigned _batteryPercentage;
	unsigned _screenHeight;
	unsigned _screenWidth;
	NSString* _comments;
	NSString* _email;
	NSArray* _imagesData;
	NSString* _incidentID;
	unsigned long long _timestamp;
	unsigned long long _appUptime;
	NSString* _bundleID;
	NSString* _pairedWatchModel;
	NSString* _pairedWatchOSVersion;
	NSString* _architecture;
	NSString* _carrier;
	NSString* _cellularNetworkType;
	NSString* _deviceType;
	unsigned long long _diskAvailable;
	unsigned long long _diskTotal;
	NSString* _locale;
	NSString* _networkConnectionType;
	NSString* _osVersion;
	NSString* _timeZone;
	ASDBetaAppVersion* _appVersion;

}

@property (copy) ASDBetaAppVersion * appVersion;                  //@synthesize appVersion=_appVersion - In the implementation block
@property (copy) NSString * comments;                             //@synthesize comments=_comments - In the implementation block
@property (copy) NSString * email;                                //@synthesize email=_email - In the implementation block
@property (copy) NSArray * imagesData;                            //@synthesize imagesData=_imagesData - In the implementation block
@property (copy) NSString * incidentID;                           //@synthesize incidentID=_incidentID - In the implementation block
@property (assign) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long appUptime;                  //@synthesize appUptime=_appUptime - In the implementation block
@property (copy) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * pairedWatchModel;                     //@synthesize pairedWatchModel=_pairedWatchModel - In the implementation block
@property (copy) NSString * pairedWatchOSVersion;                 //@synthesize pairedWatchOSVersion=_pairedWatchOSVersion - In the implementation block
@property (copy) NSString * architecture;                         //@synthesize architecture=_architecture - In the implementation block
@property (assign) unsigned batteryPercentage;                    //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (copy) NSString * carrier;                              //@synthesize carrier=_carrier - In the implementation block
@property (copy) NSString * cellularNetworkType;                  //@synthesize cellularNetworkType=_cellularNetworkType - In the implementation block
@property (copy) NSString * deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (assign) unsigned long long diskAvailable;              //@synthesize diskAvailable=_diskAvailable - In the implementation block
@property (assign) unsigned long long diskTotal;                  //@synthesize diskTotal=_diskTotal - In the implementation block
@property (copy) NSString * locale;                               //@synthesize locale=_locale - In the implementation block
@property (copy) NSString * networkConnectionType;                //@synthesize networkConnectionType=_networkConnectionType - In the implementation block
@property (copy) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
@property (assign) unsigned screenHeight;                         //@synthesize screenHeight=_screenHeight - In the implementation block
@property (assign) unsigned screenWidth;                          //@synthesize screenWidth=_screenWidth - In the implementation block
@property (copy) NSString * timeZone;                             //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setAppVersion:(ASDBetaAppVersion *)arg1 ;
-(NSString *)carrier;
-(NSString *)timeZone;
-(NSString *)deviceType;
-(void)setCarrier:(NSString *)arg1 ;
-(NSString *)locale;
-(void)setPairedWatchOSVersion:(NSString *)arg1 ;
-(void)setArchitecture:(NSString *)arg1 ;
-(NSString *)cellularNetworkType;
-(void)setCellularNetworkType:(NSString *)arg1 ;
-(unsigned long long)diskAvailable;
-(void)setDiskAvailable:(unsigned long long)arg1 ;
-(void)setDiskTotal:(unsigned long long)arg1 ;
-(NSString *)networkConnectionType;
-(void)setNetworkConnectionType:(NSString *)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(ASDBetaAppVersion *)appVersion;
-(void)setLocale:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)comments;
-(void)setDeviceType:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(void)setComments:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)osVersion;
-(void)setScreenHeight:(unsigned)arg1 ;
-(NSArray *)imagesData;
-(NSString *)incidentID;
-(unsigned long long)appUptime;
-(NSString *)bundleID;
-(void)setBatteryPercentage:(unsigned)arg1 ;
-(unsigned)screenWidth;
-(unsigned)batteryPercentage;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)diskTotal;
-(unsigned)screenHeight;
-(NSString *)email;
-(void)setScreenWidth:(unsigned)arg1 ;
-(void)setImagesData:(NSArray *)arg1 ;
-(void)setIncidentID:(NSString *)arg1 ;
-(void)setAppUptime:(unsigned long long)arg1 ;
-(NSString *)pairedWatchModel;
-(void)setPairedWatchModel:(NSString *)arg1 ;
-(NSString *)pairedWatchOSVersion;
-(NSString *)architecture;
-(void)setTimestamp:(unsigned long long)arg1 ;
@end

