/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTPerfBaseMeasurementData.h>

@protocol MTPerfBaseMeasurementTransformation;
@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MTPerfBaseMeasurement : NSObject <MTPerfBaseMeasurementData> {

	NSMutableArray* _additionalData;
	NSArray* _eventData;
	NSMutableDictionary* _timestamps;
	NSMutableDictionary* _measurementSpecificData;
	id<MTPerfBaseMeasurementTransformation> _measurementTransformer;

}

@property (nonatomic,copy,readonly) NSArray * eventData; 
@property (nonatomic,copy,readonly) NSArray * additionalFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * timestamps;                                                   //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * measurementSpecificData;                                      //@synthesize measurementSpecificData=_measurementSpecificData - In the implementation block
@property (assign,nonatomic,__weak) id<MTPerfBaseMeasurementTransformation> measurementTransformer;              //@synthesize measurementTransformer=_measurementTransformer - In the implementation block
-(id)record;
-(NSArray *)additionalFields;
-(void)addFields:(id)arg1 ;
-(NSMutableDictionary *)timestamps;
-(void)setTimestamps:(NSMutableDictionary *)arg1 ;
-(NSArray *)eventData;
-(id)metricsData;
-(id)initWithMeasurementTransformer:(id)arg1 eventData:(id)arg2 ;
-(NSMutableDictionary *)measurementSpecificData;
-(id)getAdditionalData;
-(void)addFieldsWithDictionary:(id)arg1 ;
-(void)addFieldsWithPromise:(id)arg1 ;
-(id<MTPerfBaseMeasurementTransformation>)measurementTransformer;
-(void)setMeasurementSpecificData:(NSMutableDictionary *)arg1 ;
-(void)setMeasurementTransformer:(id<MTPerfBaseMeasurementTransformation>)arg1 ;
@end

