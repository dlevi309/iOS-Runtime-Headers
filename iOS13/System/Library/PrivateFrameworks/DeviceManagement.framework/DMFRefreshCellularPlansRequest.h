/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL;

@interface DMFRefreshCellularPlansRequest : DMFTaskRequest {

	NSURL* _eSIMServerURL;

}

@property (nonatomic,copy) NSURL * eSIMServerURL;              //@synthesize eSIMServerURL=_eSIMServerURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)eSIMServerURL;
-(void)setESIMServerURL:(NSURL *)arg1 ;
@end

