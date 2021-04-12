/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKServerChangeToken, NSString;

@interface BRCSideCarSyncDownOperation : _BRCOperation <BRCOperationSubclass> {

	CKServerChangeToken* _serverChangeToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)_createZone;
-(void)_createSyncDownOperation;
-(void)_saveChangedRecords:(id)arg1 deletedRecords:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithSession:(id)arg1 changeToken:(id)arg2 ;
-(id)createActivity;
@end

