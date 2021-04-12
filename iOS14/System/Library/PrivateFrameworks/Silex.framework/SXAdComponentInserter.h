/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine;                  //@synthesize conditionEngine=_conditionEngine - In the implementation block
@property (nonatomic,readonly) unsigned long long componentTraits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(unsigned long long)adTypeFromBannerType:(unsigned long long)arg1 ;
-(unsigned long long)componentTraits;
-(long long)insertedCount;
-(id)conditionsForDOMObjectProvider:(id)arg1 ;
-(void)componentInsertionCompleted;
-(void)setLastInsertedYOffset:(double)arg1 ;
-(id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(double)lastInsertedYOffset;
-(BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(id)initWithConditionEngine:(id)arg1 advertisingSettingsFactory:(id)arg2 ;
-(id<SXAdvertisingSettingsFactory>)advertisingSettingsFactory;
-(id)cacheValidatorForCache:(id)arg1 DOMObjectProvider:(id)arg2 ;
-(void)setInsertedCount:(long long)arg1 ;
@end

