/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKRecordID, NSString;

@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	CKRecordID* _recordID;
	CKRecordID* _shareID;

}

@property (nonatomic,retain) CKRecordID * recordID;                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKRecordID * shareID;                  //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(CKRecordID *)recordID;
-(id)initWithItem:(id)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)shareID;
-(void)setShareID:(CKRecordID *)arg1 ;
-(id)createActivity;
@end

