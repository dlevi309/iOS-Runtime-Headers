/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSString, NSMutableDictionary, NSDictionary;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {

	NSString* _assetStoreFrontIdentifier;
	NSMutableDictionary* _httpHeaderFields;
	NSString* _itemIdentifier;
	/*^block*/id _responseBlock;

}

@property (nonatomic,copy) NSDictionary * HTTPHeaderFields;                   //@synthesize httpHeaderFields=_httpHeaderFields - In the implementation block
@property (nonatomic,copy) NSString * assetStoreFrontIdentifier; 
@property (copy) NSString * itemIdentifier; 
@property (copy) id responseBlock; 
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)main;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(void)setHTTPHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)HTTPHeaderFields;
-(id)_requestBodyData;
-(NSString *)assetStoreFrontIdentifier;
-(void)setAssetStoreFrontIdentifier:(NSString *)arg1 ;
@end

