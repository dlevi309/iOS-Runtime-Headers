/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVCalendar, CalDAVPrincipal;
@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {

	BOOL _shouldTrySyncTokenForBulkUpload;
	CalDAVBulkUploadTaskGroup* _uploadTaskGroup;
	id<CalDAVCalendar> _calendar;
	id<CalDAVPrincipal> _principal;

}

@property (nonatomic,retain) CalDAVBulkUploadTaskGroup * uploadTaskGroup;              //@synthesize uploadTaskGroup=_uploadTaskGroup - In the implementation block
@property (nonatomic,retain) id<CalDAVCalendar> calendar;                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) id<CalDAVPrincipal> principal;                            //@synthesize principal=_principal - In the implementation block
@property (assign,nonatomic) BOOL shouldTrySyncTokenForBulkUpload;                     //@synthesize shouldTrySyncTokenForBulkUpload=_shouldTrySyncTokenForBulkUpload - In the implementation block
-(void)dealloc;
-(id<CalDAVCalendar>)calendar;
-(void)setCalendar:(id<CalDAVCalendar>)arg1 ;
-(void)cancelTaskGroup;
-(void)startTaskGroup;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(id)dataContentType;
-(id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(BOOL)shouldTrySyncTokenForBulkUpload;
-(void)setShouldTrySyncTokenForBulkUpload:(BOOL)arg1 ;
-(void)_performBulkUpload;
-(CalDAVBulkUploadTaskGroup *)uploadTaskGroup;
-(void)_performRegularUpload;
-(void)setUploadTaskGroup:(CalDAVBulkUploadTaskGroup *)arg1 ;
@end

