/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL, NSString;

@interface DMFInviteUserToVPPRequest : DMFTaskRequest {

	NSURL* _URL;
	NSString* _originator;

}

@property (nonatomic,copy) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * originator;              //@synthesize originator=_originator - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
@end

