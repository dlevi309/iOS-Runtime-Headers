/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@protocol OS_os_transaction;
@class CKServerChangeToken, NSArray, NSObject;

@interface AXSSCloudData : NSObject {

	CKServerChangeToken* _serverChangeToken;
	NSArray* _recordsToUpdate;
	NSArray* _recordIDsToDelete;
	NSObject*<OS_os_transaction> _openTransaction;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                   //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,retain) NSArray * recordsToUpdate;                                 //@synthesize recordsToUpdate=_recordsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                               //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> openTransaction;              //@synthesize openTransaction=_openTransaction - In the implementation block
-(NSArray *)recordIDsToDelete;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(NSObject*<OS_os_transaction>)openTransaction;
-(void)setOpenTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSArray *)recordsToUpdate;
-(void)setRecordsToUpdate:(NSArray *)arg1 ;
@end

