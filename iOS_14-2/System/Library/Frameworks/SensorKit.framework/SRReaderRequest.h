/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRRequestReading.h>

@class NSString;

@interface SRReaderRequest : NSObject <SRRequestReading> {

	NSString* _sensor;
	NSString* _bundleIdentifier;
	NSString* _deviceIdentifier;

}

@property (nonatomic,retain) NSString * sensor;                        //@synthesize sensor=_sensor - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)sensor;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setSensor:(NSString *)arg1 ;
@end

