/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNRemoteMutator.h>

@class NSString;

@interface CALNNullRemoteMutator : NSObject <CALNRemoteMutator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setSnoozeTimeInterval:(double)arg1 alarm:(id)arg2 calendarItem:(id)arg3 ;
-(void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(id)arg3 ;
-(BOOL)deleteEvent:(id)arg1 withSpan:(long long)arg2 ;
@end

