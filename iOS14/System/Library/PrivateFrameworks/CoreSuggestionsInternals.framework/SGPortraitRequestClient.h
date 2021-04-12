/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class _PASXPCClientHelper;

@interface SGPortraitRequestClient : NSObject {

	_PASXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)extractionsFromSearchableItems:(id)arg1 error:(id*)arg2 ;
-(id)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2 error:(id*)arg3 ;
@end

