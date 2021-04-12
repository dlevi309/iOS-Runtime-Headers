/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSURL *)URL;
-(NSURLComponents *)URLComponents;
-(NSMutableDictionary *)headerFields;
-(id)initWithURLComponents:(id)arg1 ;
-(void)updateQueryItemsWithBlock:(/*^block*/id)arg1 ;
-(GEOURLWithHeaders *)URLWithHeaders;
@end

