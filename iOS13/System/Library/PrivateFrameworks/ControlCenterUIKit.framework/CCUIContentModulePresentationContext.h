/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIContentModulePresentationContext : NSObject <NSCopying> {

	long long _environment;

}

@property (nonatomic,readonly) long long environment;              //@synthesize environment=_environment - In the implementation block
+(id)defaultControlCenterPresentationContext;
+(id)defaultAlertPresentationContext;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)environment;
-(id)initWithEnvironment:(long long)arg1 ;
@end

