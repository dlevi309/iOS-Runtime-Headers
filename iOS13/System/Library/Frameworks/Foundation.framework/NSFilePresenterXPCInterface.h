/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol NSFilePresenterXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
@required
-(oneway void)observeChangeOfUbiquityAttributes:(id)arg1;
-(oneway void)setProviderPurposeIdentifier:(id)arg1;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(oneway void)reacquireFromReadingClaimForID:(id)arg1;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)observeChangeWithSubitemURL:(id)arg1;
-(oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
-(oneway void)observeDisconnection;
-(oneway void)observeReconnection;
-(oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;
-(oneway void)observeSharingChangeWithSubitemURL:(id)arg1;
-(oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;
-(oneway void)observePresenterChange:(BOOL)arg1 forSubitemAtURL:(id)arg2;
-(oneway void)updateLastEventID:(unsigned long long)arg1;
-(oneway void)logSuspensionWarning;

@end

