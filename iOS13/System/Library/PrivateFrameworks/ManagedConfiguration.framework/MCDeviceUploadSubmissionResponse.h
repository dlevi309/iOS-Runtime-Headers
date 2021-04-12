/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MCDeviceUploadSubmissionResponse : NSObject <NSSecureCoding> {

	NSString* _requestId;
	NSString* _requestStatus;
	NSString* _errorMessage;
	NSArray* _devices;

}

@property (nonatomic,readonly) NSString * requestId;                  //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) NSString * requestStatus;              //@synthesize requestStatus=_requestStatus - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;               //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) NSArray * devices;                     //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(NSString *)errorMessage;
-(id)_devicesFromDeviceArray:(id)arg1 ;
-(NSString *)requestId;
-(NSString *)requestStatus;
-(NSArray *)devices;
@end

