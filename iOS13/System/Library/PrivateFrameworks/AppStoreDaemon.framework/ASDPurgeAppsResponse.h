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

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	long long _purgedSize;
	NSArray* _purgedApps;

}

@property (nonatomic,readonly) long long purgedSize;              //@synthesize purgedSize=_purgedSize - In the implementation block
@property (nonatomic,readonly) NSArray * purgedApps;              //@synthesize purgedApps=_purgedApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2 ;
-(NSArray *)purgedApps;
-(long long)purgedSize;
@end

