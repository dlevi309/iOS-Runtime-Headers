/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlanProtocol.h>

@class PMLTrainingStore, NSString;

@interface PMLMockPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	BOOL _returnValue;
	BOOL _didRun;
	NSString* _planId;
	unsigned long long _version;

}

@property (nonatomic,readonly) NSString * planId;                   //@synthesize planId=_planId - In the implementation block
@property (assign) unsigned long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL didRun;                         //@synthesize didRun=_didRun - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setLastDeserializedPlanWithId:(id)arg1 toPlan:(id)arg2 ;
+(id)lastDeserializedPlanWithId:(id)arg1 ;
+(void)clearLastDeserializedPlans;
+(id)lastDeserializedPlansMap;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(NSString *)planId;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)runWhile:(/*^block*/id)arg1 didFinish:(BOOL*)arg2 ;
-(id)initWithPlanId:(id)arg1 ;
-(id)initWithPlanId:(id)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(BOOL)arg4 ;
-(id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2 returningAfterRunning:(BOOL)arg3 ;
-(id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2 ;
-(id)initWithPlanId:(id)arg1 store:(id)arg2 ;
-(BOOL)didRun;
@end

