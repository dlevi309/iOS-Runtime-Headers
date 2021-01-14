/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface _HDAlertSuppressorAssertion : HDAssertion {

	NSString* _processBundleIdentifier;
	NSObject*<OS_dispatch_source> _keepaliveTimer;

}

@property (nonatomic,copy,readonly) NSString * processBundleIdentifier;                 //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> keepaliveTimer;              //@synthesize keepaliveTimer=_keepaliveTimer - In the implementation block
-(NSString *)processBundleIdentifier;
-(NSObject*<OS_dispatch_source>)keepaliveTimer;
-(void)setKeepaliveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 ;
@end

