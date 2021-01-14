/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString, NSDictionary;

@interface WKInterfaceDevice : NSObject {

	BOOL _batteryMonitoringEnabled;
	float _batteryLevel;
	double _screenScale;
	long long _batteryState;
	NSString* _preferredContentSizeCategory;
	long long _layoutDirection;
	long long _wristLocation;
	long long _crownOrientation;
	NSString* _deviceSystemVersion;
	NSString* _deviceName;
	NSString* _deviceModel;
	NSString* _deviceLocalizedModel;
	NSString* _deviceSystemName;
	CGRect _screenBounds;

}

@property (assign,nonatomic) CGRect screenBounds;                                                          //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) double screenScale;                                                           //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                        //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * deviceSystemVersion;                                                 //@synthesize deviceSystemVersion=_deviceSystemVersion - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                                          //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;                                                         //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,copy) NSString * deviceLocalizedModel;                                                //@synthesize deviceLocalizedModel=_deviceLocalizedModel - In the implementation block
@property (nonatomic,copy) NSString * deviceSystemName;                                                    //@synthesize deviceSystemName=_deviceSystemName - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedImages; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) BOOL batteryMonitoringEnabled;              //@synthesize batteryMonitoringEnabled=_batteryMonitoringEnabled - In the implementation block
@property (nonatomic,readonly) float batteryLevel;                                                         //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) long long batteryState;                                                     //@synthesize batteryState=_batteryState - In the implementation block
@property (nonatomic,readonly) long long layoutDirection;                                                  //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,readonly) long long wristLocation;                                                    //@synthesize wristLocation=_wristLocation - In the implementation block
@property (nonatomic,readonly) long long crownOrientation;                                                 //@synthesize crownOrientation=_crownOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSString * systemVersion; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * model; 
@property (nonatomic,copy,readonly) NSString * localizedModel; 
@property (nonatomic,copy,readonly) NSString * systemName; 
+(id)currentDevice;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)systemVersion;
-(NSString *)deviceName;
-(NSString *)model;
-(NSString *)deviceModel;
-(NSString *)deviceLocalizedModel;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSString *)systemName;
-(float)batteryLevel;
-(void)setScreenBounds:(CGRect)arg1 ;
-(long long)batteryState;
-(NSString *)deviceSystemVersion;
-(NSString *)localizedModel;
-(BOOL)isBatteryMonitoringEnabled;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(NSString *)name;
-(NSString *)preferredContentSizeCategory;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(CGRect)screenBounds;
-(double)screenScale;
-(long long)layoutDirection;
-(NSString *)deviceSystemName;
-(NSDictionary *)cachedImages;
-(void)removeAllCachedImages;
-(long long)wristLocation;
-(long long)crownOrientation;
-(BOOL)addCachedImage:(id)arg1 name:(id)arg2 ;
-(BOOL)addCachedImageWithData:(id)arg1 name:(id)arg2 ;
-(void)removeCachedImageWithName:(id)arg1 ;
-(void)playHaptic:(long long)arg1 ;
-(void)setDeviceSystemVersion:(NSString *)arg1 ;
-(void)setDeviceLocalizedModel:(NSString *)arg1 ;
-(void)setDeviceSystemName:(NSString *)arg1 ;
@end

