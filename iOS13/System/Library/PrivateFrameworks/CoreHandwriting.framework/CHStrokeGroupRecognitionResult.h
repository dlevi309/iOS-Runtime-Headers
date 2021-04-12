/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying> {

	CHDrawing* _inputDrawing;
	NSArray* _inputDrawingCutPoints;
	NSDictionary* _languageFitnessByLocale;
	NSArray* _inputStrokeIdentifiers;
	NSDictionary* _recognitionResultsByLocale;
	NSDictionary* _errorsByLocale;

}

@property (nonatomic,retain,readonly) CHDrawing * inputDrawing; 
@property (nonatomic,copy,readonly) NSArray * inputDrawingCutPoints; 
@property (nonatomic,copy,readonly) NSDictionary * languageFitnessByLocale; 
@property (nonatomic,copy,readonly) NSArray * inputStrokeIdentifiers;                       //@synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * recognitionResultsByLocale;              //@synthesize recognitionResultsByLocale=_recognitionResultsByLocale - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * errorsByLocale;                          //@synthesize errorsByLocale=_errorsByLocale - In the implementation block
+(id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2 ;
+(id)filteredResultsByLocale:(id)arg1 usingLanguageFitness:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)inputStrokeIdentifiers;
-(NSDictionary *)recognitionResultsByLocale;
-(NSDictionary *)errorsByLocale;
-(id)localesSortedByLanguageFitness:(id)arg1 ;
-(CHDrawing *)inputDrawing;
-(NSArray *)inputDrawingCutPoints;
-(id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double*)arg2 doesContainUnfilteredMultiLocaleResults:(BOOL*)arg3 ;
-(double)languageFitnessForLocale:(id)arg1 ;
-(id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 inputDrawing:(id)arg5 inputDrawingCutPoints:(id)arg6 ;
-(NSDictionary *)languageFitnessByLocale;
-(id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 ;
@end

