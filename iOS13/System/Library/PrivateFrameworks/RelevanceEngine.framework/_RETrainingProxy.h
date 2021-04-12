/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RETrainingSimulationServerInterface.h>
#import <libobjc.A.dylib/RETrainingSimulationClientDelegate.h>

@class RETrainingSimulationClient, NSString, RETrainingSimulationServer;

@interface _RETrainingProxy : NSObject <RETrainingSimulationServerInterface, RETrainingSimulationClientDelegate> {

	RETrainingSimulationClient* _client;
	NSString* _serviceName;
	RETrainingSimulationServer* _server;

}

@property (nonatomic,readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) RETrainingSimulationServer * server;              //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(RETrainingSimulationServer *)server;
-(void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)availableRelevanceEngines:(/*^block*/id)arg1 ;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

