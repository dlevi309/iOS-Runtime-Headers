/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL;

@interface DMFRefreshCellularPlansRequest : DMFTaskRequest {

	NSURL* _eSIMServerURL;

}

@property (nonatomic,copy) NSURL * eSIMServerURL;              //@synthesize eSIMServerURL=_eSIMServerURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)eSIMServerURL;
-(void)setESIMServerURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

