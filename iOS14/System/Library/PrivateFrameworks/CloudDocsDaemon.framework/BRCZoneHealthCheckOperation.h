/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(id)initWithSession:(id)arg1 changeToken:(id)arg2 ;
-(void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2 ;
@end

