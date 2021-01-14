/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCalendar:(id<CalDAVCalendar>)arg1 ;
-(id<CalDAVCalendar>)calendar;
-(void)startTaskGroup;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(void)cancelTaskGroup;
-(void)dealloc;
-(id)dataContentType;
-(id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(BOOL)shouldTrySyncTokenForBulkUpload;
-(void)setShouldTrySyncTokenForBulkUpload:(BOOL)arg1 ;
-(void)_performBulkUpload;
-(CalDAVBulkUploadTaskGroup *)uploadTaskGroup;
-(void)_performRegularUpload;
-(void)setUploadTaskGroup:(CalDAVBulkUploadTaskGroup *)arg1 ;
@end

