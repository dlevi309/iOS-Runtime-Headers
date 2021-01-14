/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)planId;
-(BOOL)didRun;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)runWithError:(id*)arg1 ;
-(id)initWithPlanId:(id)arg1 ;
-(id)initWithPlanId:(id)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(BOOL)arg4 ;
-(id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2 returningAfterRunning:(BOOL)arg3 ;
-(id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2 ;
-(id)initWithPlanId:(id)arg1 store:(id)arg2 ;
@end

