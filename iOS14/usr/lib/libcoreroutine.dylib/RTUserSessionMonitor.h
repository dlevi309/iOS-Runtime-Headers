/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(unsigned)uid;
-(id)init;
-(BOOL)activeUser;
-(BOOL)previouslyActiveUser;
-(void)setPreviouslyActiveUser:(BOOL)arg1 ;
@end

