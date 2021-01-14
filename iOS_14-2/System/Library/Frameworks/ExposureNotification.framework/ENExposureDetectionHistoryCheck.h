/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/


@class NSArray, ENExposureDetectionHistorySession;

@interface ENExposureDetectionHistoryCheck : NSObject {

	NSArray* _files;
	ENExposureDetectionHistorySession* _session;

}

@property (nonatomic,copy) NSArray * files;                                            //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) ENExposureDetectionHistorySession * session;              //@synthesize session=_session - In the implementation block
-(id)init;
-(NSArray *)files;
-(ENExposureDetectionHistorySession *)session;
-(void)setSession:(ENExposureDetectionHistorySession *)arg1 ;
-(void)setFiles:(NSArray *)arg1 ;
@end

