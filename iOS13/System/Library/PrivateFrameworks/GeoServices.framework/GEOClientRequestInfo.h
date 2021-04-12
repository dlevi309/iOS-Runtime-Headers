/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableDictionary, NSDictionary;

@interface GEOClientRequestInfo : NSObject {

	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSDictionary * requests;              //@synthesize requests=_requests - In the implementation block
-(id)init;
-(NSDictionary *)requests;
-(unsigned long long)countForRequestType:(unsigned char)arg1 ;
-(void)incrementCountForRequestType:(unsigned char)arg1 ;
@end

