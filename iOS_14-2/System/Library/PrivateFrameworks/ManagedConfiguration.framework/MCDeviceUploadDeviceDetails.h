/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCDeviceUploadDeviceDetails : NSObject <NSSecureCoding> {

	NSString* _serialNumber;
	NSString* _deviceUploadStatus;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) NSString * serialNumber;                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * deviceUploadStatus;              //@synthesize deviceUploadStatus=_deviceUploadStatus - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                    //@synthesize errorMessage=_errorMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)serialNumber;
-(NSString *)deviceUploadStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)errorMessage;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
@end

