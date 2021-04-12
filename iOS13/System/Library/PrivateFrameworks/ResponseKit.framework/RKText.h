/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString, NSMutableArray;

@interface RKText : NSObject {

	BOOL _trainVerbatim;
	NSString* _string;
	NSString* _languageID;
	double _trainingWeight;
	NSMutableArray* _annotations;
	NSString* _processedText;

}

@property (retain) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (retain) NSString * languageID;                     //@synthesize languageID=_languageID - In the implementation block
@property (assign) double trainingWeight;                     //@synthesize trainingWeight=_trainingWeight - In the implementation block
@property (assign) BOOL trainVerbatim;                        //@synthesize trainVerbatim=_trainVerbatim - In the implementation block
@property (retain) NSMutableArray * annotations;              //@synthesize annotations=_annotations - In the implementation block
@property (retain) NSString * processedText;                  //@synthesize processedText=_processedText - In the implementation block
+(void)initialize;
+(id)annotationNameFromType:(unsigned long long)arg1 ;
+(id)defaultDataProvider;
+(unsigned long long)annotationTypeFromName:(id)arg1 ;
+(id)polarityNameFromType:(unsigned long long)arg1 ;
+(unsigned long long)polarityTypeFromName:(id)arg1 ;
-(id)init;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSMutableArray *)annotations;
-(id)taggedText;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(NSString *)languageID;
-(void)setLanguageID:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(BOOL)arg4 ;
-(void)annotateRange:(NSRange)arg1 type:(unsigned long long)arg2 machineGenerated:(BOOL)arg3 ;
-(void)setProcessedText:(NSString *)arg1 ;
-(double)trainingWeight;
-(BOOL)trainVerbatim;
-(void)annotateRange:(NSRange)arg1 type:(unsigned long long)arg2 ;
-(id)subTextWithRange:(NSRange)arg1 ;
-(NSString *)processedText;
-(id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 ;
-(void)enumerateAnnotationsInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)cleanupData;
-(id)subTextsByPolarity;
-(unsigned long long)annotatedPolarity;
-(id)lsmText;
-(void)setTrainingWeight:(double)arg1 ;
-(void)setTrainVerbatim:(BOOL)arg1 ;
@end

