/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSURL, NSDictionary;

@interface GEOURLWithHeaders : NSObject {

	NSURL* _URL;
	NSDictionary* _headerFields;

}

@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
-(id)init;
-(NSDictionary *)headerFields;
-(id)initWithURL:(id)arg1 headerFields:(id)arg2 ;
-(NSURL *)URL;
@end

