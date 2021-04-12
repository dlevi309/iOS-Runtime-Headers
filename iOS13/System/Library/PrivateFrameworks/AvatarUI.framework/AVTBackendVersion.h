/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVTBackendVersion : NSObject <NSSecureCoding> {

	double _backendVersion;
	double _avatarKitVersion;

}

@property (nonatomic,readonly) double backendVersion;                //@synthesize backendVersion=_backendVersion - In the implementation block
@property (nonatomic,readonly) double avatarKitVersion;              //@synthesize avatarKitVersion=_avatarKitVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentVersion;
+(id)versionFileLocationForStoreLocation:(id)arg1 ;
+(id)versionFromDiskAtLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBackendVersion:(double)arg1 avatarKitVersion:(double)arg2 ;
-(double)backendVersion;
-(double)avatarKitVersion;
-(BOOL)saveToDiskAtLocation:(id)arg1 error:(id*)arg2 ;
@end

