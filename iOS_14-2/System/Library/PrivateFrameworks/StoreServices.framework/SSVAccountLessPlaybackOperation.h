/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)responseBlock;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSString *)assetStoreFrontIdentifier;
-(void)setAssetStoreFrontIdentifier:(NSString *)arg1 ;
-(id)_requestBodyData;
-(void)setHTTPHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)HTTPHeaderFields;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
-(void)main;
@end

