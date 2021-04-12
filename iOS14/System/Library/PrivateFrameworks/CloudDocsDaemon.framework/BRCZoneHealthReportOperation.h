/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSession:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(BOOL)shouldPerformAnotherBatch;
-(void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2 ;
@end

