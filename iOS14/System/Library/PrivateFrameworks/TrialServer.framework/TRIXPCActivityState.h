/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TRIXPCActivityState : NSObject <NSCopying> {

	unsigned long long _futureCompletionStatus;
	unsigned long long _capabilities;

}

@property (nonatomic,readonly) unsigned long long futureCompletionStatus;              //@synthesize futureCompletionStatus=_futureCompletionStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long capabilities;                        //@synthesize capabilities=_capabilities - In the implementation block
+(id)xPCActivityStateWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2 ;
-(unsigned long long)capabilities;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2 ;
-(unsigned long long)futureCompletionStatus;
-(BOOL)isEqualToXPCActivityState:(id)arg1 ;
-(id)copyWithReplacementFutureCompletionStatus:(unsigned long long)arg1 ;
-(id)copyWithReplacementCapabilities:(unsigned long long)arg1 ;
@end

