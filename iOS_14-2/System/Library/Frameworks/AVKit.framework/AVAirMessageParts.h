/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVAirTransportReverseTransformationResultProtocol.h>

@class NSDictionary, NSArray, NSString, NSData;

@interface AVAirMessageParts : NSObject <AVAirTransportReverseTransformationResultProtocol> {

	NSDictionary* _uniqueHeaders;
	NSArray* _repeatedHeaders;
	BOOL _isIncomplete;
	NSString* _version;
	NSArray* _headers;
	long long _expectedBodyLength;
	NSData* _rawBodyData;
	NSData* _extraData;
	NSData* _uncompressedBodyData;

}

@property (nonatomic,readonly) id airMessage; 
@property (nonatomic,retain) NSData * uncompressedBodyData;                      //@synthesize uncompressedBodyData=_uncompressedBodyData - In the implementation block
@property (nonatomic,readonly) BOOL isIncomplete;                                //@synthesize isIncomplete=_isIncomplete - In the implementation block
@property (nonatomic,readonly) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * headers;                                //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) long long expectedBodyLength;                     //@synthesize expectedBodyLength=_expectedBodyLength - In the implementation block
@property (nonatomic,readonly) NSData * rawBodyData;                             //@synthesize rawBodyData=_rawBodyData - In the implementation block
@property (nonatomic,readonly) NSData * extraData;                               //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,readonly) NSDictionary * uniqueHeaders; 
@property (nonatomic,readonly) NSArray * repeatedHeaders; 
@property (nonatomic,readonly) NSString * bodyAsUTF8Text; 
@property (nonatomic,readonly) id bodyAsJSON; 
@property (nonatomic,readonly) NSDictionary * bodyAsJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messagePartsWithData:(id)arg1 lineSeparator:(id)arg2 data:(id)arg3 headerBodySeparator:(id)arg4 data:(id)arg5 bodyLengthKey:(id)arg6 ;
+(void)registerClass:(Class)arg1 forMessageVersion:(id)arg2 ;
-(id)bodyAsJSON;
-(void)setUncompressedBodyData:(NSData *)arg1 ;
-(id)decompressBodyUsingNamedAlgorithm:(id)arg1 ;
-(NSDictionary *)uniqueHeaders;
-(BOOL)isIncomplete;
-(BOOL)shouldCallReverseTransformerAgain;
-(void)_setIncomplete;
-(NSArray *)repeatedHeaders;
-(id)initWithVersion:(id)arg1 headers:(id)arg2 expectedBodyLength:(long long)arg3 body:(id)arg4 extra:(id)arg5 ;
-(void)_identifyUniqueAndRepeatedHeadersIfNecessary;
-(NSString *)bodyAsUTF8Text;
-(NSDictionary *)bodyAsJSONDictionary;
-(id)decompressBodyUsingAlgorithm:(long long)arg1 ;
-(long long)expectedBodyLength;
-(NSData *)uncompressedBodyData;
-(Class)_matchingClass;
-(id)airMessage;
-(NSData *)rawBodyData;
-(NSData *)extraData;
-(NSArray *)headers;
-(NSString *)version;
@end

