/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

