/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
*/

#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface ITAttentionAwarenessContext : NSObject <NSCopying> {

	NSUUID* _identifier;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

