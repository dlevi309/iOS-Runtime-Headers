/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString;

@interface ICSiriAddToAccousticHistoryRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	long long _storeItemID;
	NSString* _affiliateIdentifier;

}
-(void)execute;
-(id)initWithRequestContext:(id)arg1 storeItemID:(long long)arg2 affiliateIdentifier:(id)arg3 ;
@end

