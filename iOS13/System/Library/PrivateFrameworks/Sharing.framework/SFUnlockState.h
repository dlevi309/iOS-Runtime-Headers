/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SFUnlockState : NSObject <NSSecureCoding> {

	NSNumber* _unlockEnabled;
	NSNumber* _remotePasscodeEnabled;

}

@property (readonly) NSNumber * unlockEnabled;                      //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (readonly) NSNumber * remotePasscodeEnabled;              //@synthesize remotePasscodeEnabled=_remotePasscodeEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)unlockEnabled;
-(id)initWithUnlockEnabled:(id)arg1 remotePasscodeEnabled:(id)arg2 ;
-(NSNumber *)remotePasscodeEnabled;
@end

