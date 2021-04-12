/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@class XCTestExpectation, NSDictionary;

@interface CLIntersiloServiceMockPayload : NSObject {

	BOOL _inUse;
	XCTestExpectation* _expectation;
	NSDictionary* _inputDictionary;
	NSDictionary* _outputDictionary;

}

@property (assign,nonatomic) BOOL inUse;                                     //@synthesize inUse=_inUse - In the implementation block
@property (nonatomic,readonly) XCTestExpectation * expectation;              //@synthesize expectation=_expectation - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputDictionary;               //@synthesize inputDictionary=_inputDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputDictionary;              //@synthesize outputDictionary=_outputDictionary - In the implementation block
-(XCTestExpectation *)expectation;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)inUse;
-(id)initWithExpectation:(id)arg1 inputDictionary:(id)arg2 ;
-(void)setOutput:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)inputDictionary;
-(NSDictionary *)outputDictionary;
@end

