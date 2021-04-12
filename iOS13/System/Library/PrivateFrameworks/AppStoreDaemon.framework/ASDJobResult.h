/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError, NSNumber;

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSError* _error;
	NSNumber* _persistentID;
	long long _status;

}

@property (nonatomic,retain) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_resultWithPersistentID:(long long)arg1 bundleID:(id)arg2 status:(long long)arg3 error:(id)arg4 ;
+(id)resultWithExistingActivity:(long long)arg1 bundleID:(id)arg2 ;
+(id)resultWithInvalidActivity:(long long)arg1 bundleID:(id)arg2 ;
+(id)resultWithRestrictedActivity:(long long)arg1 bundleID:(id)arg2 ;
+(id)resultWithValidActivity:(long long)arg1 bundleID:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)status;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSNumber *)persistentID;
-(void)setPersistentID:(NSNumber *)arg1 ;
@end

