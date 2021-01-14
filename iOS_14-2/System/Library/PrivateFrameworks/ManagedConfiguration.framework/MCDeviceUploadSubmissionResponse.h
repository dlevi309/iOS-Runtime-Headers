/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)devices;
-(NSString *)requestStatus;
-(id)_devicesFromDeviceArray:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)errorMessage;
-(NSString *)requestId;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
@end

