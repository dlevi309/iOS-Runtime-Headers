/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSArray;

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	long long _seedItemID;
	BOOL _isLibraryID;
	long long _maxResultCount;
	NSArray* _resultsList;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 seedItemID:(long long)arg2 isLibraryID:(BOOL)arg3 maxResultCount:(long long)arg4 ;
@end

