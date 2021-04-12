/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRunning;
-(unsigned long long)seed;
-(id)initWithActiveTestSuiteName:(id)arg1 seed:(unsigned long long)arg2 isConnectedToTestTarget:(BOOL)arg3 isRunning:(BOOL)arg4 ;
-(NSString *)activeTestSuiteName;
-(BOOL)isConnectedToTestTarget;
@end

