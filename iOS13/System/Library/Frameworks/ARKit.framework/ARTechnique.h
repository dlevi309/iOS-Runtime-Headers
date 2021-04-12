/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARLoggingFullDescription.h>

@protocol ARTechniqueDelegate, ARTechniqueForwardingStrategy;
@class NSNumber, NSArray, NSString;

@interface ARTechnique : NSObject <ARLoggingFullDescription> {

	id<ARTechniqueDelegate> _delegate;
	unsigned long long _powerUsage;
	double _bonusLatency;
	NSNumber* _traceKey;
	NSArray* _splitTechniques;
	id<ARTechniqueForwardingStrategy> _splitTechniqueFowardingStrategy;

}

@property (__weak) id<ARTechniqueDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long powerUsage;                                                  //@synthesize powerUsage=_powerUsage - In the implementation block
@property (assign) double bonusLatency;                                                            //@synthesize bonusLatency=_bonusLatency - In the implementation block
@property (readonly) NSNumber * traceKey;                                                          //@synthesize traceKey=_traceKey - In the implementation block
@property (retain) NSArray * splitTechniques;                                                      //@synthesize splitTechniques=_splitTechniques - In the implementation block
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy;              //@synthesize splitTechniqueFowardingStrategy=_splitTechniqueFowardingStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)techniqueOfClass:(Class)arg1 inArray:(id)arg2 ;
+(id)techniqueMatchingPredicate:(id)arg1 inArray:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<ARTechniqueDelegate>)delegate;
-(void)setDelegate:(id<ARTechniqueDelegate>)arg1 ;
-(id)nodeName;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)prepare:(BOOL)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)techniques;
-(unsigned long long)requiredSensorDataTypes;
-(NSArray *)splitTechniques;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
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
-(void)setSplitTechniques:(NSArray *)arg1 ;
-(id<ARTechniqueForwardingStrategy>)splitTechniqueFowardingStrategy;
-(void)setSplitTechniqueFowardingStrategy:(id<ARTechniqueForwardingStrategy>)arg1 ;
-(id)techniqueOfClass:(Class)arg1 ;
-(id)techniqueMatchingPredicate:(id)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg1 ;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3 ;
-(void)replaceTechniques:(id)arg1 ;
-(double)bonusLatency;
-(void)setBonusLatency:(double)arg1 ;
@end

