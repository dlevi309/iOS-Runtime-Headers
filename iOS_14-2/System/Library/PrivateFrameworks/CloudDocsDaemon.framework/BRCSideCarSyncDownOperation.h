/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)_createZone;
-(void)_createSyncDownOperation;
-(void)_saveChangedRecords:(id)arg1 deletedRecords:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 ;
-(id)initWithSession:(id)arg1 changeToken:(id)arg2 ;
@end

