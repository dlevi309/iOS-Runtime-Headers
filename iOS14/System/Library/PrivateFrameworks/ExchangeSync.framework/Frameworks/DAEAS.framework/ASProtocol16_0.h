/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASProtocol14_1.h>

@interface ASProtocol16_0 : ASProtocol14_1
-(BOOL)supportsAttachments;
-(id)protocolVersion;
-(BOOL)sendUID;
-(BOOL)includeCommentInMeetingResponse;
-(BOOL)sendEmailForMeetingInvitationAndResponse;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)sendDTStamp;
-(BOOL)useStructuredLocation;
-(BOOL)alwaysSendAttendeeRole;
-(BOOL)includeExceptionsInParent;
-(BOOL)useInstanceIdForException;
-(BOOL)useFloatingTimeForAllDayEvents;
-(BOOL)useEmptyRecurrence;
-(BOOL)useEmptyReminderMinutes;
-(BOOL)useEmptyLocation;
-(BOOL)syncSnoozeEvents;
-(BOOL)useEmptyAttendees;
-(unsigned char)shortProtocolVersion;
@end

