/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARDotGraph.h>
#import <ARKitCore/ARTechniqueProtocol.h>
#import <ARKitCore/ARLoggingFullDescription.h>

@protocol ARTechniqueDelegate, ARTechniqueForwardingStrategy;
@class NSNumber, NSArray, NSString;

@interface ARTechnique : NSObject <ARDotGraph, ARTechniqueProtocol, ARLoggingFullDescription> {

	double _bonusLatency;
	NSNumber* _traceKey;
	id<ARTechniqueDelegate> _delegate;
	unsigned long long _powerUsage;
	id<ARTechniqueForwardingStrategy> _splitTechniqueFowardingStrategy;
	NSArray* _splitTechniques;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<ARTechniqueDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long powerUsage;                                                  //@synthesize powerUsage=_powerUsage - In the implementation block
@property (assign) double bonusLatency;                                                            //@synthesize bonusLatency=_bonusLatency - In the implementation block
@property (readonly) NSNumber * traceKey;                                                          //@synthesize traceKey=_traceKey - In the implementation block
@property (retain) NSArray * splitTechniques;                                                      //@synthesize splitTechniques=_splitTechniques - In the implementation block
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy;              //@synthesize splitTechniqueFowardingStrategy=_splitTechniqueFowardingStrategy - In the implementation block
+(id)colorForTechnique:(id)arg1 ;
+(id)techniqueOfClass:(Class)arg1 inArray:(id)arg2 ;
+(id)techniqueMatchingPredicate:(id)arg1 inArray:(id)arg2 ;
-(id)processData:(id)arg1 ;
-(id)init;
-(id<ARTechniqueDelegate>)delegate;
-(void)setDelegate:(id<ARTechniqueDelegate>)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(void)prepare:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_fullDescription;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(NSNumber *)traceKey;
-(BOOL)deterministicMode;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(long long)captureBehavior;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(unsigned long long)powerUsage;
-(id)initWithTechniques:(id)arg1 ;
-(id)initWithParallelTechniques:(id)arg1 ;
-(NSArray *)splitTechniques;
-(void)dotGraphWithLines:(id)arg1 ;
-(id)techniques;
-(void)setSplitTechniques:(NSArray *)arg1 ;
-(void)setSplitTechniqueFowardingStrategy:(id<ARTechniqueForwardingStrategy>)arg1 ;
-(id<ARTechniqueForwardingStrategy>)splitTechniqueFowardingStrategy;
-(id)techniqueOfClass:(Class)arg1 ;
-(id)techniqueMatchingPredicate:(id)arg1 ;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)replaceTechniques:(id)arg1 ;
-(double)bonusLatency;
-(void)setBonusLatency:(double)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg1 ;
-(void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3 ;
@end

