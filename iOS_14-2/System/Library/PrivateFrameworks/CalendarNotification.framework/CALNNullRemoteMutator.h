/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)deleteEvent:(id)arg1 withSpan:(long long)arg2 ;
-(void)setSnoozeTimeInterval:(double)arg1 alarm:(id)arg2 calendarItem:(id)arg3 ;
-(void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(id)arg3 ;
@end

