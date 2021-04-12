/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)configureClass:(id)arg1 ;
+(id)objectWithName:(id)arg1 ;
+(void)postIncomingEvent:(id)arg1 ;
+(id)_defaultEvaluator;
-(NSString *)description;
-(id)initWithName:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(unsigned)symptomSaveFlags;
-(void)setSymptomSaveFlags:(unsigned)arg1 ;
-(unsigned)symptomMaxRetainTime;
-(void)setSymptomMaxRetainTime:(unsigned)arg1 ;
-(unsigned)symptomSaveAdditionalId;
-(void)setSymptomSaveAdditionalId:(unsigned)arg1 ;
-(NSString *)symptomName;
-(void)setSymptomKey:(NSString *)arg1 ;
-(NSString *)symptomKey;
-(void)evaluateIncomingEvent:(id)arg1 ;
-(NSMutableArray *)symptomRules;
-(void)setSymptomRules:(NSMutableArray *)arg1 ;
@end

