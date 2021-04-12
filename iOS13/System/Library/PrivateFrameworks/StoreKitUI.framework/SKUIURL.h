/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL, NSDictionary;

@interface SKUIURL : NSObject <NSCopying> {

	NSMutableDictionary* _queryDictionary;
	NSString* _referrerApplicationName;
	NSString* _referrerURLString;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * underlyingURL;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * actionString; 
@property (nonatomic,copy,readonly) NSDictionary * queryStringDictionary; 
@property (nonatomic,readonly) NSString * redeemCode; 
@property (nonatomic,readonly) NSString * searchTerm; 
@property (nonatomic,readonly) NSString * URLBagKey; 
@property (nonatomic,copy) NSString * referrerApplicationName;                         //@synthesize referrerApplicationName=_referrerApplicationName - In the implementation block
@property (nonatomic,copy) NSString * referrerURLString;                               //@synthesize referrerURLString=_referrerURLString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)_queryDictionary;
-(id)newURLRequest;
-(NSString *)searchTerm;
-(NSString *)referrerApplicationName;
-(NSString *)referrerURLString;
-(void)setReferrerApplicationName:(NSString *)arg1 ;
-(void)setReferrerURLString:(NSString *)arg1 ;
-(NSString *)URLBagKey;
-(id)valueForQueryParameter:(id)arg1 ;
-(NSString *)actionString;
-(NSURL *)underlyingURL;
-(id)newURLRequestWithBaseURL:(id)arg1 ;
-(NSString *)redeemCode;
-(id)initWithURLBagKey:(id)arg1 ;
-(id)_decodedQueryParameter:(id)arg1 ;
-(id)_searchGroupForSearchKind:(id)arg1 ;
-(id)_searchURLBagKey;
-(id)_appStoreSearchURLBagKey;
-(id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(NSDictionary *)queryStringDictionary;
@end

