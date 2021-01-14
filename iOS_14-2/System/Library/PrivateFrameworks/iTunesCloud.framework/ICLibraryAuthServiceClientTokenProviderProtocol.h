/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol ICLibraryAuthServiceClientTokenProviderProtocol <NSObject>
@required
-(void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getTokenResultForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

