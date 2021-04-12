/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)lockedByLabel;
-(void)setLockedByLabel:(NSString *)arg1 ;
@end

