/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/


@interface SubCalLocalDBHelper : NSObject
+(id)eventStoreWithClientId:(id)arg1 ;
+(BOOL)_updateConstraintsIfNecessaryForSource:(id)arg1 ;
+(id)_existingCalendarInCalDAVSourceWithExternalID:(id)arg1 inSource:(id)arg2 ;
+(id)_makeCalendarWithExternalId:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
+(id)_relativePathFromCalDAVExternalID:(id)arg1 ;
+(id)initializeSourceWithExternalId:(id)arg1 inStore:(id)arg2 needsSave:(BOOL*)arg3 error:(id*)arg4 ;
+(id)initializeCalendarWithExternalId:(id)arg1 inSource:(id)arg2 needsSave:(BOOL*)arg3 error:(id*)arg4 ;
+(void)_setEventStoreProvider:(id)arg1 ;
@end

