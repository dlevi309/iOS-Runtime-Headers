/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKBarcodeEventConfigurationRequest : NSObject <NSSecureCoding> {

	NSString* _deviceAccountIdentifier;
	NSData* _configurationData;
	long long _configurationDataType;

}

@property (nonatomic,copy) NSString * deviceAccountIdentifier;              //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSData * configurationData;                      //@synthesize configurationData=_configurationData - In the implementation block
@property (assign,nonatomic) long long configurationDataType;               //@synthesize configurationDataType=_configurationDataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setConfigurationData:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)configurationData;
-(id)description;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(NSString *)deviceAccountIdentifier;
-(long long)configurationDataType;
-(void)setConfigurationDataType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

