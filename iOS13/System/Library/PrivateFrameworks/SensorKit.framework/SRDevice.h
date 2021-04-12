/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@class NSString;

@interface SRDevice : NSObject {

	NSString* _name;
	NSString* _model;
	NSString* _systemName;
	NSString* _systemVersion;
	NSString* _deviceIdentifier;
	NSString* _buildVersion;

}

@property (copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSString * systemName;                 //@synthesize systemName=_systemName - In the implementation block
@property (copy,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
+(id)currentDevice;
-(void)dealloc;
-(NSString *)name;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)systemName;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(id)sr_dictionaryRepresentation;
-(id)initWithDeviceDetails:(id)arg1 ;
@end

