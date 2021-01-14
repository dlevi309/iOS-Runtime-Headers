/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDSModeDetails : NSObject <NSCopying> {

	unsigned long long _interruptionSuppression;

}

@property (nonatomic,readonly) unsigned long long interruptionSuppression;              //@synthesize interruptionSuppression=_interruptionSuppression - In the implementation block
+(id)detailsForInactiveDoNotDisturb;
-(id)description;
-(unsigned long long)interruptionSuppression;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)restrictedDetailsWithDetails:(id)arg1 ;
-(id)initWithInterruptionSuppression:(unsigned long long)arg1 ;
@end

