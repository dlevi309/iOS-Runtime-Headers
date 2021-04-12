/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCEndpointConnection.h>

@interface FCClientEndpointConnection : FCEndpointConnection
-(void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 countryCode:(id)arg5 languageCode:(id)arg6 callbackQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
-(id)initWithConfigurationManager:(id)arg1 ;
-(void)openArticleOrFeedWithArticleURL:(id)arg1 feedURL:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)reportConcern:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribeToEmailNewsLetterForUserWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

