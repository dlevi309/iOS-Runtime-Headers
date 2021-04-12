/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDQueryServerClientState : NSObject <NSCopying> {

	unsigned _applicationState;

}

@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSuspended;
-(BOOL)isForeground;
-(id)initWithApplicationState:(unsigned)arg1 ;
@end

