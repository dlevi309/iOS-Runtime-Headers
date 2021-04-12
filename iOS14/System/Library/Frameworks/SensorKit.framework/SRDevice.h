/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SRDevice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _model;
	NSString* _systemName;
	NSString* _systemVersion;
	NSString* _internalProductType;
	NSString* _deviceIdentifier;
	NSString* _buildVersion;

}

@property (copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSString * systemName;                 //@synthesize systemName=_systemName - In the implementation block
@property (copy,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentDevice;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)systemName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_productType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)sr_dictionaryRepresentation;
-(id)initWithDeviceDetails:(id)arg1 ;
@end

