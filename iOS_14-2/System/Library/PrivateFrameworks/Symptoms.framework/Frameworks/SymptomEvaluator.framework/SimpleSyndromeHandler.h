/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol SyndromeHandlerProtocol;
@class NSMutableArray, NSString;

@interface SimpleSyndromeHandler : NSObject <ConfigurableObjectProtocol> {

	double lastReportTime;
	id<SyndromeHandlerProtocol> _nextStage;
	double _lastReportTime;
	NSMutableArray* _resetSources;
	unsigned _dampeningInterval;
	unsigned _dampeningStart;
	unsigned _dampeningIncrement;
	unsigned _dampeningMax;
	NSString* _syndromeName;
	const char* _syndromeUTF8Name;

}

@property (nonatomic,readonly) NSString * syndromeName;                 //@synthesize syndromeName=_syndromeName - In the implementation block
@property (assign,nonatomic) const char* syndromeUTF8Name;              //@synthesize syndromeUTF8Name=_syndromeUTF8Name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithName:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
+(void)setDefaultNextStage:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(BOOL)_setName:(id)arg1 ;
-(NSString *)description;
-(void)_reset:(id)arg1 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(NSString *)syndromeName;
-(void)setSyndromeUTF8Name:(const char*)arg1 ;
-(const char*)syndromeUTF8Name;
@end

