/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	long long _purgeableSize;
	NSArray* _purgeableApps;

}

@property (nonatomic,readonly) long long purgeableSize;              //@synthesize purgeableSize=_purgeableSize - In the implementation block
@property (nonatomic,readonly) NSArray * purgeableApps;              //@synthesize purgeableApps=_purgeableApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPurgeableSize:(long long)arg1 purgeableApps:(id)arg2 ;
-(NSArray *)purgeableApps;
-(long long)purgeableSize;
@end

