/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKRecordID, CKDSharePCSData;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (nonatomic,readonly) CKRecordID * shareID; 
@property (nonatomic,retain) CKDSharePCSData * sharePCSData; 
-(CKRecordID *)shareID;
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(CKDSharePCSData *)sharePCSData;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_decryptPCS;
-(BOOL)_savePCSDataToCache;
@end

