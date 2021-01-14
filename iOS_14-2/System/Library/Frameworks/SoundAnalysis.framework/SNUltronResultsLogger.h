/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSString, NSMutableArray, NSArray;

@interface SNUltronResultsLogger : NSObject {

	NSString* _dateString;
	NSString* _soundIdentifier;
	BOOL _wroteResults;
	SCD_Struct_SN3 _startingTime;
	NSMutableArray* _detectionResults;
	NSString* _directoryPath;
	NSString* _fileNameWithoutExtension;

}

@property (readonly) NSString * directoryPath;                         //@synthesize directoryPath=_directoryPath - In the implementation block
@property (readonly) NSString * fileNameWithoutExtension;              //@synthesize fileNameWithoutExtension=_fileNameWithoutExtension - In the implementation block
@property (readonly) NSArray * detectionResults;                       //@synthesize detectionResults=_detectionResults - In the implementation block
+(id)createUltronResultsDictionaryFromDetectionResults:(id)arg1 ;
+(id)createUltronFinalDictionaryWithDetectionResults:(id)arg1 dateString:(id)arg2 fileNameWithoutExtension:(id)arg3 soundIdenfifier:(id)arg4 frameCount:(long long)arg5 ;
+(BOOL)writeDictionaryAsJSON:(id)arg1 fileNameWithoutExtension:(id)arg2 directoryPath:(id)arg3 error:(id*)arg4 ;
-(void)addResult:(id)arg1 ;
-(NSString *)directoryPath;
-(id)initWithDirectoryPath:(id)arg1 fileNameWithoutExtension:(id)arg2 dateString:(id)arg3 soundIdentifier:(id)arg4 ;
-(NSString *)fileNameWithoutExtension;
-(NSArray *)detectionResults;
-(BOOL)writeResultsToFileWithAudioFrameCount:(long long)arg1 error:(id*)arg2 ;
@end

