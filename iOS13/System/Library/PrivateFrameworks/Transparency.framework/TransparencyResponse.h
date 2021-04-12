/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSData, NSDictionary, TransparencyRequest;

@interface TransparencyResponse : NSObject {

	NSData* _data;
	NSDictionary* _metadata;
	TransparencyRequest* _request;

}

@property (retain) TransparencyRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (retain) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setRequest:(TransparencyRequest *)arg1 ;
-(TransparencyRequest *)request;
-(id)initWithRequest:(id)arg1 responseData:(id)arg2 metadata:(id)arg3 ;
-(id)serverHint;
@end

