/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface WFTaskIdentifier : NSObject <NSCopying, NSSecureCoding> {

	int _pid;
	NSUUID* _UUID;
	NSString* _processName;

}

@property (nonatomic,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultIdentifier;
-(NSUUID *)UUID;
-(int)pid;
-(id)init;
-(NSString *)processName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

