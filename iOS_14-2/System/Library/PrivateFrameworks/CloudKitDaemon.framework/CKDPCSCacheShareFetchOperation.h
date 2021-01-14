/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKRecordID, CKDSharePCSData;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (nonatomic,readonly) CKRecordID * shareID; 
@property (nonatomic,retain) CKDSharePCSData * sharePCSData; 
-(CKRecordID *)shareID;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_decryptPCS;
-(BOOL)hasAllPCSData;
-(BOOL)_savePCSDataToCache;
-(id)itemTypeName;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(CKDSharePCSData *)sharePCSData;
@end

