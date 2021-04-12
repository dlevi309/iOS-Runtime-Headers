/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSString;

@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass> {

	BOOL shouldPerformAnotherBatch;
	BRCAccountSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithSession:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(BOOL)shouldPerformAnotherBatch;
-(void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2 ;
@end

