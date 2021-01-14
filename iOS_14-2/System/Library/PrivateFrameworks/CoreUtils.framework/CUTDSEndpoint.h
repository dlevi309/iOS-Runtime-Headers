/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CUTDSEndpoint : NSObject <NSSecureCoding> {

	int _dataLinkType;
	NSData* _deviceAddress;
	NSString* _serviceType;

}

@property (assign,nonatomic) int dataLinkType;                  //@synthesize dataLinkType=_dataLinkType - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(int)dataLinkType;
-(void)setDataLinkType:(int)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceType;
@end

