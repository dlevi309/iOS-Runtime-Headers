/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)URL;
-(NSDictionary *)headerFields;
-(id)initWithURL:(id)arg1 headerFields:(id)arg2 ;
@end

