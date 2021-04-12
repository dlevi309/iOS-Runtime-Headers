/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDictionary;

@interface ASDRepairOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _forceRevoke;
	BOOL _forceUpsell;
	int _fairplayStatus;
	NSString* _bundleID;
	NSString* _bundlePath;
	NSNumber* _accountDSID;
	long long _claimStyle;
	unsigned long long _exitReason;
	NSDictionary* _relaunchOptions;

}

@property (assign,nonatomic) BOOL forceRevoke;                           //@synthesize forceRevoke=_forceRevoke - In the implementation block
@property (assign,nonatomic) BOOL forceUpsell;                           //@synthesize forceUpsell=_forceUpsell - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * bundlePath;                    //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,readonly) NSNumber * accountDSID;                   //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                     //@synthesize claimStyle=_claimStyle - In the implementation block
@property (assign,nonatomic) unsigned long long exitReason;              //@synthesize exitReason=_exitReason - In the implementation block
@property (assign,nonatomic) int fairplayStatus;                         //@synthesize fairplayStatus=_fairplayStatus - In the implementation block
@property (nonatomic,copy) NSDictionary * relaunchOptions;               //@synthesize relaunchOptions=_relaunchOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)bundlePath;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)forceRevoke;
-(id)initWithBundleID:(id)arg1 ;
-(int)fairplayStatus;
-(BOOL)forceUpsell;
-(NSDictionary *)relaunchOptions;
-(id)initWithBundlePath:(id)arg1 ;
-(id)copyUserInfoDictionary;
-(void)setFairplayStatus:(int)arg1 ;
-(void)setRelaunchOptions:(NSDictionary *)arg1 ;
-(void)setForceRevoke:(BOOL)arg1 ;
-(void)setForceUpsell:(BOOL)arg1 ;
-(unsigned long long)exitReason;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setExitReason:(unsigned long long)arg1 ;
-(id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3 ;
-(long long)claimStyle;
-(NSNumber *)accountDSID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

