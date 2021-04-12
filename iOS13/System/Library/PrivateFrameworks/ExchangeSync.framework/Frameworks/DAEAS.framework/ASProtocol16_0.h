/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASProtocol14_1.h>

@interface ASProtocol16_0 : ASProtocol14_1
-(id)protocolVersion;
-(BOOL)supportsAttachments;
-(BOOL)includeCommentInMeetingResponse;
-(BOOL)sendEmailForMeetingInvitationAndResponse;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)sendDTStamp;
-(BOOL)sendUID;
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

