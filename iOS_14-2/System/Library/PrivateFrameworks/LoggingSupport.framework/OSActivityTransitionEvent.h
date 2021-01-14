/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityTransitionEvent : OSActivityEvent {

	unsigned long long _transitionToActivityID;

}

@property (nonatomic,readonly) unsigned long long transitionToActivityID;              //@synthesize transitionToActivityID=_transitionToActivityID - In the implementation block
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)transitionToActivityID;
@end

