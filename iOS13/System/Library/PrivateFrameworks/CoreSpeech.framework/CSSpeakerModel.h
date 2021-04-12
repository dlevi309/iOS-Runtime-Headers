/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString, NSArray;

@interface CSSpeakerModel : NSObject {

	NSString* _modelFileName;
	NSString* _languageCode;
	NSString* _modelPath;
	NSString* _utteranceDirectory;
	NSString* _tdtiModelPath;
	NSString* _tdtiUtteranceDirectory;
	NSString* _tiModelPath;
	NSString* _tiUtteranceDirectory;

}

@property (nonatomic,readonly) NSString * modelPath; 
@property (nonatomic,readonly) NSString * utteranceDirectory; 
@property (nonatomic,readonly) NSString * tiModelPath; 
@property (nonatomic,readonly) NSString * tiUtteranceDirectory; 
@property (nonatomic,readonly) NSString * tdtiModelPath; 
@property (nonatomic,readonly) NSString * tdtiUtteranceDirectory; 
@property (nonatomic,readonly) NSArray * enrollmentUtterance; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL needsRetrain; 
-(BOOL)isValid;
-(NSString *)modelPath;
-(void)discard;
-(NSString *)utteranceDirectory;
-(BOOL)_isDirectoryEmpty:(id)arg1 ;
-(id)initWithSpeakerModelFileName:(id)arg1 languageCode:(id)arg2 ;
-(NSString *)tiModelPath;
-(NSString *)tdtiModelPath;
-(NSString *)tdtiUtteranceDirectory;
-(NSString *)tiUtteranceDirectory;
-(NSArray *)enrollmentUtterance;
-(BOOL)needsRetrain;
@end

