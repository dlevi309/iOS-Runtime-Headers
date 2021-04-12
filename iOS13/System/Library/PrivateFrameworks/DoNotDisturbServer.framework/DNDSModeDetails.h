/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDSModeDetails : NSObject <NSCopying> {

	unsigned long long _interruptionSuppression;

}

@property (nonatomic,readonly) unsigned long long interruptionSuppression;              //@synthesize interruptionSuppression=_interruptionSuppression - In the implementation block
+(id)detailsForInactiveDoNotDisturb;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)interruptionSuppression;
-(id)restrictedDetailsWithDetails:(id)arg1 ;
-(id)initWithInterruptionSuppression:(unsigned long long)arg1 ;
@end

