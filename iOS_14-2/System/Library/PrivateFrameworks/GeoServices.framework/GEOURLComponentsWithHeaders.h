/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSURLComponents, NSMutableDictionary, NSURL, GEOURLWithHeaders;

@interface GEOURLComponentsWithHeaders : NSObject {

	NSURLComponents* _URLComponents;
	NSMutableDictionary* _headerFields;

}

@property (nonatomic,readonly) NSURLComponents * URLComponents;                 //@synthesize URLComponents=_URLComponents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) GEOURLWithHeaders * URLWithHeaders; 
-(id)initWithString:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSMutableDictionary *)headerFields;
-(NSURLComponents *)URLComponents;
-(void)updateQueryItemsWithBlock:(/*^block*/id)arg1 ;
-(NSURL *)URL;
-(GEOURLWithHeaders *)URLWithHeaders;
-(id)initWithURLComponents:(id)arg1 ;
@end

