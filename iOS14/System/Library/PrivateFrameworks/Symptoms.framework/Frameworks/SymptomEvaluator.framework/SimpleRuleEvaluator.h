/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol AdditionalInfoProtocol;
@class NSMutableArray, SimpleSyndromeHandler, NSString;

@interface SimpleRuleEvaluator : NSObject <ConfigurableObjectProtocol> {

	NSMutableArray* _conditionsToCheck;
	char* _stringToLog;
	unsigned long long _awd_code;
	SimpleSyndromeHandler* _syndromeToCall;
	id<AdditionalInfoProtocol> _additionalInfoGenerator;
	SEL _additionalInfoSelector;
	NSString* _signatureName;

}

@property (nonatomic,retain) NSString * signatureName;              //@synthesize signatureName=_signatureName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithName:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(NSString *)signatureName;
-(NSString *)description;
-(void)evaluateSignatureForEvent:(id)arg1 ;
-(void)setSignatureName:(NSString *)arg1 ;
@end

