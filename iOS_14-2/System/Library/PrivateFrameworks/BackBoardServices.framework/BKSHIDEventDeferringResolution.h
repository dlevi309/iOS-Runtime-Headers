/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventDeferringResolution : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BKSHIDEventDisplay* _display;
	BKSHIDEventDeferringEnvironment* _environment;
	long long _versionedPID;
	int _pid;
	BKSHIDEventDeferringToken* _token;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) BKSHIDEventDisplay * display;                               //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) long long versionedPID;                                          //@synthesize versionedPID=_versionedPID - In the implementation block
@property (nonatomic,readonly) int pid;                                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * token;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)build:(/*^block*/id)arg1 ;
-(int)pid;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)versionedPID;
-(id)modifiedResolution:(/*^block*/id)arg1 ;
-(id)description;
-(id)_initWithDisplay:(id)arg1 environment:(id)arg2 versionedPID:(long long)arg3 pid:(int)arg4 token:(id)arg5 ;
-(unsigned long long)hash;
-(BKSHIDEventDisplay *)display;
-(id)initWithCoder:(id)arg1 ;
-(BKSHIDEventDeferringEnvironment *)environment;
-(BKSHIDEventDeferringToken *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

