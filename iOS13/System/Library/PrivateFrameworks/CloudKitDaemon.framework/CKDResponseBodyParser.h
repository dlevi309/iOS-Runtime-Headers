/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSError;

@interface CKDResponseBodyParser : NSObject {

	NSObject*<OS_dispatch_queue> _parseQueue;
	NSMutableData* _parserData;
	NSError* _parserError;
	/*^block*/id _objectParsedBlock;
	long long _qualityOfService;

}

@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> parseQueue; 
@property (nonatomic,retain) NSMutableData * parserData; 
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                                     //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSError *)parserError;
-(id)initWithQoS:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)setParserError:(NSError *)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)setObjectParsedBlock:(id)arg1 ;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
-(id)objectParsedBlock;
@end

