/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithBackendVersion:(double)arg1 avatarKitVersion:(double)arg2 ;
-(double)backendVersion;
-(double)avatarKitVersion;
-(BOOL)saveToDiskAtLocation:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

