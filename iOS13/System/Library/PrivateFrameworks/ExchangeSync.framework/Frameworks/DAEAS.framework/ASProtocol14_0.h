/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASProtocol12_1.h>

@interface ASProtocol14_0 : ASProtocol12_1
-(id)protocolVersion;
-(BOOL)useSmartMailTasks;
-(BOOL)sendEmailInWBXML;
-(BOOL)usesTopLevelStatusCodes;
-(BOOL)fetchAttachmentsWithItemOperations;
-(BOOL)allAttachmentsAreBase64ed;
-(BOOL)sendCalendarInfoInRecurrence;
-(BOOL)sendUserAgentInDeviceInfo;
-(BOOL)supportsAttendeesInExceptions;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)alwaysSendTimezone;
-(unsigned char)shortProtocolVersion;
@end

