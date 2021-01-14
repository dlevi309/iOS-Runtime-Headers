/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol SymptomAdditionalProtocol;
@class NSString, NSMutableArray;

@interface SimpleSymptomEvaluator : NSObject <ConfigurableObjectProtocol> {

	NSString* symptomName;
	NSString* symptomKey;
	unsigned symptomSaveFlags;
	unsigned symptomSaveAdditionalId;
	unsigned symptomMaxRetainTime;
	id<SymptomAdditionalProtocol> symptomAdditionalHandlers[4];
	NSMutableArray* symptomRules;

}

@property (nonatomic,retain) NSString * symptomName; 
@property (nonatomic,retain) NSString * symptomKey; 
@property (assign,nonatomic) unsigned symptomSaveFlags; 
@property (assign,nonatomic) unsigned symptomSaveAdditionalId; 
@property (assign,nonatomic) unsigned symptomMaxRetainTime; 
@property (nonatomic,retain) NSMutableArray * symptomRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)objectWithName:(id)arg1 ;
+(id)_defaultEvaluator;
+(id)configureClass:(id)arg1 ;
+(void)postIncomingEvent:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(void)setSymptomRules:(NSMutableArray *)arg1 ;
-(void)setSymptomSaveFlags:(unsigned)arg1 ;
-(NSMutableArray *)symptomRules;
-(void)setSymptomSaveAdditionalId:(unsigned)arg1 ;
-(void)evaluateIncomingEvent:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setSymptomKey:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)symptomKey;
-(unsigned)symptomSaveAdditionalId;
-(unsigned)symptomMaxRetainTime;
-(unsigned)symptomSaveFlags;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setSymptomMaxRetainTime:(unsigned)arg1 ;
-(NSString *)symptomName;
@end

