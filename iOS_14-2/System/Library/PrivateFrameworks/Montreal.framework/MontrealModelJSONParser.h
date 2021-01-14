/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


@class NSString, MontrealNNModelNetwork, NSDictionary;

@interface MontrealModelJSONParser : NSObject {

	NSString* _jsonDir;
	MontrealNNModelNetwork* _network;
	NSDictionary* _infoDictionary;

}

@property (readonly) NSString * jsonDir;                            //@synthesize jsonDir=_jsonDir - In the implementation block
@property (readonly) MontrealNNModelNetwork * network;              //@synthesize network=_network - In the implementation block
@property (readonly) NSDictionary * infoDictionary;                 //@synthesize infoDictionary=_infoDictionary - In the implementation block
-(NSDictionary *)infoDictionary;
-(id)initWithURL:(id)arg1 ;
-(MontrealNNModelNetwork *)network;
-(NSString *)jsonDir;
-(id)createJSONFromFile:(id)arg1 ;
@end

