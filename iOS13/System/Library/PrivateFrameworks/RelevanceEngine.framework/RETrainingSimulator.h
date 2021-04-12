/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RETrainingSimulationClientDelegate.h>

@class RETrainingSimulationClient, NSString;

@interface RETrainingSimulator : NSObject <RETrainingSimulationClientDelegate> {

	RETrainingSimulationClient* _client;
	NSString* _targetProcessName;
	NSString* _relevanceEngineName;

}

@property (nonatomic,readonly) NSString * targetProcessName;                //@synthesize targetProcessName=_targetProcessName - In the implementation block
@property (nonatomic,readonly) NSString * relevanceEngineName;              //@synthesize relevanceEngineName=_relevanceEngineName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allElements;
-(id)availableRelevanceEngines;
-(void)trainingSimulationClientWasInterrupted:(id)arg1 ;
-(void)trainingSimulationClientWasInvalidated:(id)arg1 ;
-(id)initWithTargetProcess:(id)arg1 relevanceEngine:(id)arg2 ;
-(void)createElementFromDescription:(id)arg1 ;
-(BOOL)performCommand:(id)arg1 withOptions:(id)arg2 ;
-(id)allElementIdentifiers;
-(BOOL)runActionOfElementWithDescription1:(id)arg1 ;
-(id)storedDiagnosticLogsPath;
-(id)encodedObjectAtPath:(id)arg1 ;
-(NSString *)targetProcessName;
-(NSString *)relevanceEngineName;
@end

