/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationRevokeUpgradeContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _transactionID;
	NSString* _bundleID;
	NSString* _teamID;

}

@property (nonatomic,copy) NSString * transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * teamID;                     //@synthesize teamID=_teamID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)transactionID;
@end

