/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICIAMSynchronizeMessagesResponse;

@interface ICInAppMessageSyncRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	ICIAMSynchronizeMessagesResponse* _syncResponse;
	unsigned long long _fromRevision;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2 ;
@end

