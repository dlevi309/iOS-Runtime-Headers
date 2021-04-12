/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, NSArray, NSDictionary;

@interface _DPJSONSegment : NSObject {

	NSString* _key;
	NSString* _serverAlgorithmString;
	NSArray* _records;
	NSDictionary* _parameterDictionary;

}

@property (nonatomic,copy,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverAlgorithmString;              //@synthesize serverAlgorithmString=_serverAlgorithmString - In the implementation block
@property (nonatomic,readonly) NSArray * records;                                  //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterDictionary;                 //@synthesize parameterDictionary=_parameterDictionary - In the implementation block
-(id)init;
-(NSString *)key;
-(NSArray *)records;
-(id)jsonSegmentString;
-(NSDictionary *)parameterDictionary;
-(id)parameterStringFrom:(id)arg1 ;
-(id)initWithKey:(id)arg1 serverAlgorithmString:(id)arg2 parameterDictionary:(id)arg3 records:(id)arg4 ;
-(NSString *)serverAlgorithmString;
@end

