/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTUserSessionMonitor : RTNotifier {

	BOOL _previouslyActiveUser;

}

@property (assign,nonatomic) BOOL previouslyActiveUser;              //@synthesize previouslyActiveUser=_previouslyActiveUser - In the implementation block
@property (getter=activeUser,readonly) BOOL activeUser; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(id)init;
-(unsigned)uid;
-(BOOL)activeUser;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)previouslyActiveUser;
-(void)setPreviouslyActiveUser:(BOOL)arg1 ;
@end

