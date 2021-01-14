/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSCyclerStatus : NSObject <NSSecureCoding> {

	BOOL _connectedToTestTarget;
	BOOL _running;
	NSString* _activeTestSuiteName;
	unsigned long long _seed;

}

@property (nonatomic,copy,readonly) NSString * activeTestSuiteName;                                    //@synthesize activeTestSuiteName=_activeTestSuiteName - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                                                //@synthesize seed=_seed - In the implementation block
@property (getter=isConnectedToTestTarget,nonatomic,readonly) BOOL connectedToTestTarget;              //@synthesize connectedToTestTarget=_connectedToTestTarget - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                          //@synthesize running=_running - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)seed;
-(id)init;
-(id)initWithActiveTestSuiteName:(id)arg1 seed:(unsigned long long)arg2 isConnectedToTestTarget:(BOOL)arg3 isRunning:(BOOL)arg4 ;
-(NSString *)activeTestSuiteName;
-(BOOL)isConnectedToTestTarget;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRunning;
-(id)initWithCoder:(id)arg1 ;
@end

