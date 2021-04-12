/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RETrainingSimulationClientInterface.h>

@protocol OS_dispatch_queue, RETrainingSimulationClientDelegate;
@class NSObject, NSXPCConnection, NSString;

@interface RETrainingSimulationClient : NSObject <RETrainingSimulationClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSString* _targetProcessName;
	id<RETrainingSimulationClientDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * targetProcessName;                                        //@synthesize targetProcessName=_targetProcessName - In the implementation block
@property (nonatomic,__weak,readonly) id<RETrainingSimulationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<RETrainingSimulationClientDelegate>)delegate;
-(void)_handleInvalidation;
-(void)_handleInterruption;
-(void)availableRelevanceEnginesDidChange;
-(id)initWithTargetProcessName:(id)arg1 delegate:(id)arg2 ;
-(void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 ;
-(BOOL)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 ;
-(id)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 ;
-(id)fetchAllElementsInRelevanceEngine:(id)arg1 ;
-(id)availableRelevanceEngines;
-(BOOL)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 ;
-(id)diagnosticLogFileForRelevanceEngine:(id)arg1 ;
-(id)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 ;
-(NSString *)targetProcessName;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
@end

