/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MCDeviceUploadRequestType, MCDeviceUploadUser;

@interface MCDeviceUploadSubmitDeviceRequestPayload : NSObject <NSSecureCoding> {

	NSString* _orgId;
	NSString* _orgName;
	MCDeviceUploadRequestType* _requestType;
	MCDeviceUploadUser* _submitter;
	MCDeviceUploadUser* _approver;
	NSString* _soldToId;

}

@property (nonatomic,readonly) NSString * orgId;                                     //@synthesize orgId=_orgId - In the implementation block
@property (nonatomic,readonly) NSString * orgName;                                   //@synthesize orgName=_orgName - In the implementation block
@property (nonatomic,readonly) MCDeviceUploadRequestType * requestType;              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) MCDeviceUploadUser * submitter;                       //@synthesize submitter=_submitter - In the implementation block
@property (nonatomic,readonly) MCDeviceUploadUser * approver;                        //@synthesize approver=_approver - In the implementation block
@property (nonatomic,readonly) NSString * soldToId;                                  //@synthesize soldToId=_soldToId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOrgId:(id)arg1 orgName:(id)arg2 requestType:(id)arg3 submitter:(id)arg4 approver:(id)arg5 soldToId:(id)arg6 ;
-(NSString *)orgId;
-(NSString *)orgName;
-(MCDeviceUploadRequestType *)requestType;
-(MCDeviceUploadUser *)submitter;
-(MCDeviceUploadUser *)approver;
-(NSString *)soldToId;
@end

