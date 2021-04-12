/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSDateInterval, NSDictionary, NSMutableDictionary, NSString, NSMeasurement;

@interface SRKeyboardMetrics : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {

	NSDateInterval* _interval;
	NSDictionary* _keyboardMetaInformation;
	NSMutableDictionary* _mutableScalarMetrics;
	NSMutableDictionary* _mutablePositionalMetrics;
	NSMutableDictionary* _mutableProbabilityMetrics;

}

@property (retain) NSDateInterval * interval;                                    //@synthesize interval=_interval - In the implementation block
@property (copy) NSDictionary * keyboardMetaInformation;                         //@synthesize keyboardMetaInformation=_keyboardMetaInformation - In the implementation block
@property (retain) NSMutableDictionary * mutableScalarMetrics;                   //@synthesize mutableScalarMetrics=_mutableScalarMetrics - In the implementation block
@property (retain) NSMutableDictionary * mutablePositionalMetrics;               //@synthesize mutablePositionalMetrics=_mutablePositionalMetrics - In the implementation block
@property (retain) NSMutableDictionary * mutableProbabilityMetrics;              //@synthesize mutableProbabilityMetrics=_mutableProbabilityMetrics - In the implementation block
@property (readonly) double duration; 
@property (copy,readonly) NSString * keyboardIdentifier; 
@property (copy,readonly) NSString * version; 
@property (readonly) NSMeasurement * width; 
@property (readonly) NSMeasurement * height; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateInterval *)interval;
-(void)setInterval:(NSDateInterval *)arg1 ;
-(NSString *)version;
-(double)duration;
-(NSMeasurement *)width;
-(NSMeasurement *)height;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(id)sr_dictionaryRepresentation;
-(NSString *)keyboardIdentifier;
-(void)setMutableScalarMetrics:(NSMutableDictionary *)arg1 ;
-(void)setMutablePositionalMetrics:(NSMutableDictionary *)arg1 ;
-(void)setMutableProbabilityMetrics:(NSMutableDictionary *)arg1 ;
-(void)setKeyboardMetaInformation:(NSDictionary *)arg1 ;
-(NSDictionary *)keyboardMetaInformation;
-(NSMutableDictionary *)mutableScalarMetrics;
-(NSMutableDictionary *)mutablePositionalMetrics;
-(NSMutableDictionary *)mutableProbabilityMetrics;
-(id)scalarMetrics;
-(id)probabilityMetrics;
-(id)positionalMetrics;
-(id)initWithInterval:(id)arg1 metaInformation:(id)arg2 ;
-(long long)totalWords;
-(long long)totalAlteredWords;
-(long long)totalTaps;
-(long long)totalDrags;
-(long long)totalDeletes;
-(long long)totalEmojis;
-(long long)totalPaths;
-(double)totalPathTime;
-(id)totalPathLength;
-(long long)totalAutoCorrections;
-(long long)totalSpaceCorrections;
-(long long)totalRetroCorrections;
-(long long)totalTranspositionCorrections;
-(long long)totalInsertKeyCorrections;
-(long long)totalSkipTouchCorrections;
-(long long)totalNearKeyCorrections;
-(long long)totalSubstitutionCorrections;
-(long long)totalHitTestCorrections;
-(double)totalTypingDuration;
-(id)upErrorDistance;
-(id)downErrorDistance;
-(id)spaceUpErrorDistance;
-(id)spaceDownErrorDistance;
-(id)deleteUpErrorDistance;
-(id)deleteDownErrorDistance;
-(id)shortWordCharKeyUpErrorDistance;
-(id)shortWordCharKeyDownErrorDistance;
-(id)touchDownUp;
-(id)spaceTouchDownUp;
-(id)deleteTouchDownUp;
-(id)shortWordCharKeyTouchDownUp;
-(id)touchDownDown;
-(id)charKeyToPrediction;
-(id)shortWordCharKeyToCharKey;
-(id)charKeyToAnyTapKey;
-(id)anyTapToCharKey;
-(id)spaceToCharKey;
-(id)charKeyToSpaceKey;
-(id)spaceToDeleteKey;
-(id)deleteToSpaceKey;
-(id)spaceToSpaceKey;
-(id)spaceToShiftKey;
-(id)spaceToPlaneChangeKey;
-(id)spaceToPredictionKey;
-(id)deleteToCharKey;
-(id)charKeyToDelete;
-(id)deleteToDelete;
-(id)deleteToShiftKey;
-(id)deleteToPlaneChangeKey;
-(id)anyTapToPlaneChangeKey;
-(id)planeChangeToAnyTap;
-(id)charKeyToPlaneChangeKey;
-(id)planeChangeKeyToCharKey;
-(id)pathErrorDistanceRatio;
-(id)deleteToPath;
-(id)pathToDelete;
-(id)spaceToPath;
-(id)pathToSpace;
-(id)pathToPath;
-(id)longWordUpErrorDistance;
-(id)longWordDownErrorDistance;
-(id)longWordTouchDownUp;
-(id)longWordTouchDownDown;
-(id)deleteToDeletes;
@end

