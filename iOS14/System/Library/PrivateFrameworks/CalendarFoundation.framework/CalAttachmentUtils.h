/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface CalAttachmentUtils : NSObject
+(id)legacyCalendarDataContainer;
+(id)legacyAttachmentContainerWithBaseURL:(id)arg1 ;
+(id)attachmentContainerWithBaseURL:(id)arg1 ;
+(id)getFileSizeForPath:(id)arg1 fileManager:(id)arg2 error:(id*)arg3 ;
+(id)localRelativePathForLocalAbsoluteURL:(id)arg1 localBaseURL:(id)arg2 ;
+(id)localURLForAttachmentWithRelativePath:(id)arg1 baseURL:(id)arg2 ;
+(id)attachmentContainerForSourceIdentifier:(id)arg1 calendarDataContainer:(id)arg2 ;
+(id)_stripSubdomain:(id)arg1 ;
+(id)_knownTLDForHostname:(id)arg1 ;
+(BOOL)attachmentURL:(id)arg1 matchesServerURL:(id)arg2 ;
@end

