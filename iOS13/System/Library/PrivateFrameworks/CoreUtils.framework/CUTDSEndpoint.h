/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(int)dataLinkType;
-(void)setDataLinkType:(int)arg1 ;
@end

