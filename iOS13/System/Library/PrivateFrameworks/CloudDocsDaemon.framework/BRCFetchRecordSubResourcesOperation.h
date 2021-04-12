/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_group, OS_dispatch_source;
@class BRCServerZone, NSMutableDictionary, NSMutableArray, NSObject, NSError, NSDictionary, NSString;

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	NSMutableDictionary* _recordsByID;
	NSMutableArray* _recordsWithXattrsToFetch;
	NSObject*<OS_dispatch_group> _recordsBeingFetchedGroup;
	NSObject*<OS_dispatch_group> _operationGroup;
	NSObject*<OS_dispatch_source> _xattrFetchingSource;
	NSError* _error;
	BOOL _isDoneFetchingRecords;

}

@property (nonatomic,readonly) NSDictionary * recordsByID;              //@synthesize recordsByID=_recordsByID - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)cancel;
-(void)stop;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)addRecord:(id)arg1 ;
-(void)stopWithError:(id)arg1 ;
-(NSDictionary *)recordsByID;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)initWithServerZone:(id)arg1 ;
-(void)startWithParentOperation:(id)arg1 ;
-(void)removeRecordByID:(id)arg1 ;
-(void)waitUntilRecordsAreFetched;
-(void)removeAllRecords;
-(void)_scheduleXattrFetch;
@end

