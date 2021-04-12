/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@class NSArray, NSDictionary, MTPromise, MTCallerSuppliedFields, NSMutableArray, NSMutableDictionary;

@interface MTMetricsData : MTObject {

	BOOL _anonymous;
	NSArray* _registeredEventData;
	NSDictionary* _baseFields;
	NSArray* _additionalBaseData;
	NSDictionary* _eventSpecificFields;
	NSArray* _additionalEventData;
	MTPromise* _configBaseFields;
	MTCallerSuppliedFields* _callerSuppliedFields;
	NSMutableArray* _additionalData;
	NSMutableDictionary* _performanceData;
	NSMutableArray* _postProcessingBlocks;

}

@property (nonatomic,retain) NSArray * registeredEventData;                                       //@synthesize registeredEventData=_registeredEventData - In the implementation block
@property (nonatomic,retain) NSDictionary * baseFields;                                           //@synthesize baseFields=_baseFields - In the implementation block
@property (nonatomic,retain) NSArray * additionalBaseData;                                        //@synthesize additionalBaseData=_additionalBaseData - In the implementation block
@property (nonatomic,retain) NSDictionary * eventSpecificFields;                                  //@synthesize eventSpecificFields=_eventSpecificFields - In the implementation block
@property (nonatomic,retain) NSArray * additionalEventData;                                       //@synthesize additionalEventData=_additionalEventData - In the implementation block
@property (nonatomic,retain) MTPromise * configBaseFields;                                        //@synthesize configBaseFields=_configBaseFields - In the implementation block
@property (nonatomic,retain) MTCallerSuppliedFields * callerSuppliedFields;                       //@synthesize callerSuppliedFields=_callerSuppliedFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalData;                                     //@synthesize additionalData=_additionalData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * performanceData;                               //@synthesize performanceData=_performanceData - In the implementation block
@property (nonatomic,retain) NSMutableArray * postProcessingBlocks;                               //@synthesize postProcessingBlocks=_postProcessingBlocks - In the implementation block
@property (assign,setter=setAnonymous:,getter=isAnonymous,nonatomic) BOOL anonymous;              //@synthesize anonymous=_anonymous - In the implementation block
-(BOOL)isAnonymous;
-(void)addFields:(id)arg1 ;
-(id)debugDescription;
-(id)toDictionary;
-(void)setAnonymous:(BOOL)arg1 ;
-(id)recordEvent;
-(void)setBaseFields:(NSDictionary *)arg1 ;
-(NSDictionary *)baseFields;
-(void)setAdditionalData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)additionalData;
-(void)setRegisteredEventData:(NSArray *)arg1 ;
-(void)addPostProcessingBlock:(/*^block*/id)arg1 ;
-(id)userAndClientIDFields;
-(NSArray *)registeredEventData;
-(void)setCallerSuppliedFields:(MTCallerSuppliedFields *)arg1 ;
-(void)setConfigBaseFields:(MTPromise *)arg1 ;
-(NSMutableDictionary *)performanceData;
-(void)setAdditionalBaseData:(NSArray *)arg1 ;
-(void)setEventSpecificFields:(NSDictionary *)arg1 ;
-(void)setAdditionalEventData:(NSArray *)arg1 ;
-(NSMutableArray *)postProcessingBlocks;
-(void)addPostProcessingBlocks:(id)arg1 ;
-(void)setPostProcessingBlocks:(NSMutableArray *)arg1 ;
-(id)getAdditionalData;
-(id)getPostProcessingBlocks;
-(NSArray *)additionalBaseData;
-(NSDictionary *)eventSpecificFields;
-(NSArray *)additionalEventData;
-(MTPromise *)configBaseFields;
-(MTCallerSuppliedFields *)callerSuppliedFields;
-(id)composeFieldsMaps;
-(void)cancelUnfinishedPromisedEventData;
-(void)addFieldsWithDictionary:(id)arg1 ;
-(void)addFieldsWithPromise:(id)arg1 ;
-(void)setPerformanceData:(NSMutableDictionary *)arg1 ;
@end

