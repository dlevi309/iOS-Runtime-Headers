/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKServerChangeToken, NSMutableDictionary, NSMutableArray, NSString;

@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass> {

	CKServerChangeToken* _changeToken;
	NSMutableDictionary* _recordsByID;
	NSMutableArray* _deletedRecordIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithSession:(id)arg1 changeToken:(id)arg2 ;
-(void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2 ;
@end

