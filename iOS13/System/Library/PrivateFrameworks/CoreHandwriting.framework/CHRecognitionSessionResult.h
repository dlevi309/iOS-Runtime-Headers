/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CHStrokeProviderVersion;
@class NSArray, CHStrokeClutterFilter, CHStrokeClassificationResult, CHStrokeGroupingResult, NSDictionary, NSString;

@interface CHRecognitionSessionResult : NSObject <NSCopying> {

	long long __transcriptionCapability;
	id<CHStrokeProviderVersion> _strokeProviderVersion;
	NSArray* _orderedStrokeIdentifiers;
	NSArray* _locales;
	NSArray* _preferredLocales;
	CHStrokeClutterFilter* _clutterFilter;
	long long _recognitionEnvironment;
	CHStrokeClassificationResult* _strokeClassificationResult;
	CHStrokeGroupingResult* _strokeGroupingResult;
	NSDictionary* __recognitionResultsByGroupID;
	SCD_Struct_CH36 _generationDuration;

}

@property (nonatomic,copy,readonly) NSDictionary * _recognitionResultsByGroupID;                              //@synthesize _recognitionResultsByGroupID=__recognitionResultsByGroupID - In the implementation block
@property (nonatomic,readonly) long long _transcriptionCapability; 
@property (nonatomic,retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion;                      //@synthesize strokeProviderVersion=_strokeProviderVersion - In the implementation block
@property (nonatomic,retain,readonly) NSArray * orderedStrokeIdentifiers;                                     //@synthesize orderedStrokeIdentifiers=_orderedStrokeIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locales;                                                        //@synthesize locales=_locales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preferredLocales;                                               //@synthesize preferredLocales=_preferredLocales - In the implementation block
@property (nonatomic,retain,readonly) CHStrokeClutterFilter * clutterFilter;                                  //@synthesize clutterFilter=_clutterFilter - In the implementation block
@property (nonatomic,readonly) long long recognitionEnvironment;                                              //@synthesize recognitionEnvironment=_recognitionEnvironment - In the implementation block
@property (nonatomic,retain,readonly) CHStrokeClassificationResult * strokeClassificationResult;              //@synthesize strokeClassificationResult=_strokeClassificationResult - In the implementation block
@property (nonatomic,retain,readonly) CHStrokeGroupingResult * strokeGroupingResult;                          //@synthesize strokeGroupingResult=_strokeGroupingResult - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CH36 generationDuration;                                            //@synthesize generationDuration=_generationDuration - In the implementation block
@property (nonatomic,readonly) NSString * highConfidenceDebugDescription; 
@property (nonatomic,readonly) NSString * allResultsDebugDescription; 
@property (nonatomic,readonly) NSArray * allResultsDebugDescriptionByGroup; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)preferredLocales;
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(NSArray *)locales;
-(CHStrokeGroupingResult *)strokeGroupingResult;
-(id)recognitionResultForStrokeGroupIdentifier:(long long)arg1 ;
-(CHStrokeClassificationResult *)strokeClassificationResult;
-(NSArray *)orderedStrokeIdentifiers;
-(NSDictionary *)_recognitionResultsByGroupID;
-(id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(/*^block*/id)arg2 ;
-(id)initWithStrokeProviderVersion:(id)arg1 orderedStrokeIdentifiers:(id)arg2 locales:(id)arg3 preferredLocales:(id)arg4 clutterFilter:(id)arg5 strokeClassificationResult:(id)arg6 strokeGroupingResult:(id)arg7 recognitionResults:(id)arg8 inlineContinuousModeResults:(id)arg9 generationDuration:(SCD_Struct_CH36)arg10 recognitionEnvironment:(long long)arg11 ;
-(long long)_transcriptionCapability;
-(NSString *)highConfidenceDebugDescription;
-(NSString *)allResultsDebugDescription;
-(NSArray *)allResultsDebugDescriptionByGroup;
-(id)allResultsDebugDescriptionWithGroupHeaderBlock:(/*^block*/id)arg1 ;
-(CHStrokeClutterFilter *)clutterFilter;
-(long long)recognitionEnvironment;
-(SCD_Struct_CH36)generationDuration;
@end

