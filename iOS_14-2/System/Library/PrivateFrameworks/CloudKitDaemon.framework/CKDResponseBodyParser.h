/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSError;

@interface CKDResponseBodyParser : NSObject {

	NSObject*<OS_dispatch_queue> _parseQueue;
	NSMutableData* _parserData;
	BOOL _testRepeatedParseResults;
	NSError* _parserError;
	/*^block*/id _objectParsedBlock;
	long long _qualityOfService;

}

@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> parseQueue; 
@property (nonatomic,retain) NSMutableData * parserData; 
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL testRepeatedParseResults;                          //@synthesize testRepeatedParseResults=_testRepeatedParseResults - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                                     //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)processData:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(NSError *)parserError;
-(long long)qualityOfService;
-(id)initWithQoS:(long long)arg1 ;
-(void)setParserError:(NSError *)arg1 ;
-(void)setObjectParsedBlock:(id)arg1 ;
-(void)setTestRepeatedParseResults:(BOOL)arg1 ;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
-(id)objectParsedBlock;
-(BOOL)testRepeatedParseResults;
@end

