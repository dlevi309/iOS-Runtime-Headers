/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIContentModulePresentationContext : NSObject <NSCopying> {

	long long _environment;

}

@property (nonatomic,readonly) long long environment;              //@synthesize environment=_environment - In the implementation block
+(id)defaultAlertPresentationContext;
+(id)defaultControlCenterPresentationContext;
-(id)initWithEnvironment:(long long)arg1 ;
-(unsigned long long)hash;
-(long long)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

