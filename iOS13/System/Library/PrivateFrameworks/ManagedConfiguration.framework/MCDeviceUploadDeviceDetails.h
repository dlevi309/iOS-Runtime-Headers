/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(NSString *)serialNumber;
-(NSString *)deviceUploadStatus;
-(NSString *)errorMessage;
@end

