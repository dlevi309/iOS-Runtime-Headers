/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithExpectation:(id)arg1 inputDictionary:(id)arg2 ;
-(void)setOutput:(id)arg1 forKey:(id)arg2 ;
-(void)setInUse:(BOOL)arg1 ;
-(XCTestExpectation *)expectation;
-(NSDictionary *)inputDictionary;
-(NSDictionary *)outputDictionary;
-(BOOL)inUse;
@end

