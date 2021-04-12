/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDRepairApplicationRequestOptions : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSNumber* _accountDSID;
	long long _claimStyle;
	unsigned long long _exitReason;

}

@property (nonatomic,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSNumber * accountDSID;                   //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                     //@synthesize claimStyle=_claimStyle - In the implementation block
@property (assign,nonatomic) unsigned long long exitReason;              //@synthesize exitReason=_exitReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setExitReason:(unsigned long long)arg1 ;
-(unsigned long long)exitReason;
-(id)initWithBundleID:(id)arg1 ;
-(NSNumber *)accountDSID;
-(id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3 ;
-(long long)claimStyle;
@end

