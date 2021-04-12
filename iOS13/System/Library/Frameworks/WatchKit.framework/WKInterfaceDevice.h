/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)systemVersion;
-(NSString *)model;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)preferredContentSizeCategory;
-(long long)layoutDirection;
-(CGRect)screenBounds;
-(void)setScreenBounds:(CGRect)arg1 ;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(BOOL)isBatteryMonitoringEnabled;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(long long)batteryState;
-(float)batteryLevel;
-(void)setScreenScale:(double)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(double)screenScale;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSDictionary *)cachedImages;
-(BOOL)addCachedImage:(id)arg1 name:(id)arg2 ;
-(BOOL)addCachedImageWithData:(id)arg1 name:(id)arg2 ;
-(void)removeCachedImageWithName:(id)arg1 ;
-(void)removeAllCachedImages;
-(void)playHaptic:(long long)arg1 ;
-(long long)wristLocation;
-(long long)crownOrientation;
-(NSString *)deviceSystemVersion;
-(void)setDeviceSystemVersion:(NSString *)arg1 ;
-(NSString *)deviceLocalizedModel;
-(void)setDeviceLocalizedModel:(NSString *)arg1 ;
-(NSString *)deviceSystemName;
-(void)setDeviceSystemName:(NSString *)arg1 ;
@end

