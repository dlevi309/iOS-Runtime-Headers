/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKRecordID, NSString;

@interface BRCFetchiWorkSharingInfoOperation : _BRCOperation <BRCOperationSubclass> {

	CKRecordID* _recordID;

}

@property (nonatomic,retain) CKRecordID * recordID;                 //@synthesize recordID=_recordID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(CKRecordID *)recordID;
-(id)initWithDocumentItem:(id)arg1 ;
@end

