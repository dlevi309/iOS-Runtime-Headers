/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithURL:(id)arg1 ;
-(NSDictionary *)infoDictionary;
-(id)createJSONFromFile:(id)arg1 ;
-(NSString *)jsonDir;
-(MontrealNNModelNetwork *)network;
@end

