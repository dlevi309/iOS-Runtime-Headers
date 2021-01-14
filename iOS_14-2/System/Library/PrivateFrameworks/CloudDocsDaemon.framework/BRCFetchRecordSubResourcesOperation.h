/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeAllRecords;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(NSDictionary *)recordsByID;
-(void)stop;
-(NSError *)error;
-(void)stopWithError:(id)arg1 ;
-(void)main;
-(void)addRecord:(id)arg1 ;
-(void)cancel;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithServerZone:(id)arg1 ;
-(void)startWithParentOperation:(id)arg1 ;
-(void)removeRecordByID:(id)arg1 ;
-(void)waitUntilRecordsAreFetched;
-(void)_scheduleXattrFetch;
@end

