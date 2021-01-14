/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICMusicSubscriptionRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	long long _requestType;
	BOOL _requestingOfflineSlot;

}
-(void)execute;
-(id)_bagKeyForRequestType:(long long)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 requestType:(long long)arg2 requestingOfflineSlot:(BOOL)arg3 ;
@end

