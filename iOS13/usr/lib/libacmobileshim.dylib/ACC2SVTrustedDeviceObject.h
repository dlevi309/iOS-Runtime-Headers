/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@class NSString, NSData, NSDate;

@interface ACC2SVTrustedDeviceObject : NSObject {

	NSString* _deviceID;
	NSString* _deviceType;
	NSString* _deviceClass;
	NSString* _deviceDescription;
	NSString* _deviceModel;
	NSString* _deviceModelName;
	NSString* _deviceColor;
	NSData* _deviceIcon;
	NSDate* _lastUseDate;
	NSString* _deviceDisplayDescription;

}

@property (nonatomic,retain) NSString * deviceID;                                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * deviceType;                              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * deviceClass;                             //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,retain) NSString * deviceDescription;                       //@synthesize deviceDescription=_deviceDescription - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                             //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * deviceModelName;                         //@synthesize deviceModelName=_deviceModelName - In the implementation block
@property (nonatomic,retain) NSString * deviceColor;                             //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,retain) NSData * deviceIcon;                                //@synthesize deviceIcon=_deviceIcon - In the implementation block
@property (nonatomic,retain) NSDate * lastUseDate;                               //@synthesize lastUseDate=_lastUseDate - In the implementation block
@property (nonatomic,readonly) NSString * imageURL; 
@property (nonatomic,readonly) NSString * deviceDisplayDescription;              //@synthesize deviceDisplayDescription=_deviceDisplayDescription - In the implementation block
@property (nonatomic,readonly) BOOL isSMSDevice; 
@property (nonatomic,readonly) BOOL isTOTPDevice; 
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(double)scale;
-(NSString *)deviceType;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceClass;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)imageURL;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(NSString *)deviceModelName;
-(NSString *)deviceDescription;
-(void)setDeviceDescription:(NSString *)arg1 ;
-(NSDate *)lastUseDate;
-(void)setLastUseDate:(NSDate *)arg1 ;
-(void)setDeviceModelName:(NSString *)arg1 ;
-(void)setDeviceIcon:(NSData *)arg1 ;
-(NSData *)deviceIcon;
-(BOOL)isTOTPDevice;
-(NSString *)deviceDisplayDescription;
-(BOOL)isSMSDevice;
@end

