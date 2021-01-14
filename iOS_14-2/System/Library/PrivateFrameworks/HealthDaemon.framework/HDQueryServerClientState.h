/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDQueryServerClientState : NSObject <NSCopying> {

	unsigned _applicationState;

}

@property (nonatomic,readonly) unsigned applicationState;                        //@synthesize applicationState=_applicationState - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(unsigned)applicationState;
-(BOOL)isSuspended;
-(id)init;
-(BOOL)isForeground;
-(id)description;
-(id)initWithApplicationState:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

