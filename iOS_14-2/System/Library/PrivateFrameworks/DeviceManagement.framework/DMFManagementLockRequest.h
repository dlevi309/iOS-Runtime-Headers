/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFManagementLockRequest : DMFTaskRequest {

	NSString* _lockedByLabel;
	NSString* _passcode;

}

@property (nonatomic,copy) NSString * lockedByLabel;              //@synthesize lockedByLabel=_lockedByLabel - In the implementation block
@property (nonatomic,copy) NSString * passcode;                   //@synthesize passcode=_passcode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLockedByLabel:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)lockedByLabel;
@end

