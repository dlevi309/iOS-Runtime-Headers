/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRequestContext:(id)arg1 seedItemID:(long long)arg2 isLibraryID:(BOOL)arg3 maxResultCount:(long long)arg4 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
@end

