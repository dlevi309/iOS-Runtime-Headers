/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding> {

	BOOL _systemApp;
	NSString* _bundleID;
	NSString* _purgeableReason;
	long long _staticDiskUsage;
	NSNumber* _storeItemID;

}

@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * purgeableReason;                       //@synthesize purgeableReason=_purgeableReason - In the implementation block
@property (assign,nonatomic) long long staticDiskUsage;                      //@synthesize staticDiskUsage=_staticDiskUsage - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                           //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;              //@synthesize systemApp=_systemApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)staticDiskUsage;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(NSNumber *)storeItemID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSystemApp:(BOOL)arg1 ;
-(BOOL)isSystemApp;
-(id)description;
-(id)diagnosticDescription;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)purgeableReason;
-(void)setPurgeableReason:(NSString *)arg1 ;
-(void)setStaticDiskUsage:(long long)arg1 ;
@end

