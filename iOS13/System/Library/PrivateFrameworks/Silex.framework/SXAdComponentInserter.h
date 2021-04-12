/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentInserter.h>

@protocol SXComponentInsertionConditionEngine, SXAdvertisingSettingsFactory;
@class NSString;

@interface SXAdComponentInserter : NSObject <SXComponentInserter> {

	id<SXComponentInsertionConditionEngine> _conditionEngine;
	id<SXAdvertisingSettingsFactory> _advertisingSettingsFactory;
	long long _insertedCount;
	double _lastInsertedYOffset;

}

@property (nonatomic,readonly) id<SXAdvertisingSettingsFactory> advertisingSettingsFactory;              //@synthesize advertisingSettingsFactory=_advertisingSettingsFactory - In the implementation block
@property (assign,nonatomic) long long insertedCount;                                                    //@synthesize insertedCount=_insertedCount - In the implementation block
@property (assign,nonatomic) double lastInsertedYOffset;                                                 //@synthesize lastInsertedYOffset=_lastInsertedYOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine;                  //@synthesize conditionEngine=_conditionEngine - In the implementation block
@property (nonatomic,readonly) unsigned long long componentTraits; 
-(id<SXAdvertisingSettingsFactory>)advertisingSettingsFactory;
-(long long)insertedCount;
-(double)lastInsertedYOffset;
-(unsigned long long)adTypeFromBannerType:(unsigned long long)arg1 ;
-(void)setLastInsertedYOffset:(double)arg1 ;
-(void)setInsertedCount:(long long)arg1 ;
-(id)conditionsForDOMObjectProvider:(id)arg1 ;
-(BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(unsigned long long)componentTraits;
-(id)cacheValidatorForCache:(id)arg1 DOMObjectProvider:(id)arg2 ;
-(void)componentInsertionCompleted;
-(id)initWithConditionEngine:(id)arg1 advertisingSettingsFactory:(id)arg2 ;
@end

