/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSData, NSDictionary, TransparencyNetworkRequest;

@interface TransparencyResponse : NSObject {

	NSData* _data;
	NSDictionary* _metadata;
	TransparencyNetworkRequest* _request;

}

@property (retain) TransparencyNetworkRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (retain) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
-(void)setRequest:(TransparencyNetworkRequest *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(TransparencyNetworkRequest *)request;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(NSDictionary *)metadata;
-(id)initWithRequest:(id)arg1 responseData:(id)arg2 metadata:(id)arg3 ;
-(id)serverHint;
@end

