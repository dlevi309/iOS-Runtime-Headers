/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginPerformanceKit.framework/LoginPerformanceKit
*/


@class NSString, NSMutableArray;

@interface LPKPerfResultEntry : NSObject {

	BOOL _needsReCalculation;
	double _medianValue;
	double _meanValue;
	NSString* _entryName;
	NSMutableArray* _entryValues;

}

@property (nonatomic,retain) NSMutableArray * entryValues;              //@synthesize entryValues=_entryValues - In the implementation block
@property (assign,nonatomic) BOOL needsReCalculation;                   //@synthesize needsReCalculation=_needsReCalculation - In the implementation block
@property (nonatomic,copy) NSString * entryName;                        //@synthesize entryName=_entryName - In the implementation block
@property (nonatomic,readonly) double medianValue;                      //@synthesize medianValue=_medianValue - In the implementation block
@property (nonatomic,readonly) double meanValue;                        //@synthesize meanValue=_meanValue - In the implementation block
-(id)init;
-(NSString *)entryName;
-(double)meanValue;
-(void)setNeedsReCalculation:(BOOL)arg1 ;
-(void)_reCalculateValuesIfNeeded;
-(BOOL)needsReCalculation;
-(void)addEntryValue:(double)arg1 ;
-(double)medianValue;
-(void)setEntryName:(NSString *)arg1 ;
-(NSMutableArray *)entryValues;
-(void)setEntryValues:(NSMutableArray *)arg1 ;
@end

