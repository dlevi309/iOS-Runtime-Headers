/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHPatternNetwork;

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStep {

	BOOL _capitalizationToSplit;
	BOOL _convertToLowercase;
	CHPatternNetwork* _patternFST;
	long long _patternType;

}

@property (nonatomic,retain) CHPatternNetwork * patternFST;              //@synthesize patternFST=_patternFST - In the implementation block
@property (assign,nonatomic) long long patternType;                      //@synthesize patternType=_patternType - In the implementation block
@property (assign,nonatomic) BOOL capitalizationToSplit;                 //@synthesize capitalizationToSplit=_capitalizationToSplit - In the implementation block
@property (assign,nonatomic) BOOL convertToLowercase;                    //@synthesize convertToLowercase=_convertToLowercase - In the implementation block
-(long long)patternType;
-(void)setPatternType:(long long)arg1 ;
-(id)process:(id)arg1 ;
-(void)dealloc;
-(CHPatternNetwork *)patternFST;
-(void)setPatternFST:(CHPatternNetwork *)arg1 ;
-(id)initWithPatternFst:(id)arg1 patternType:(long long)arg2 capitalizationToSplit:(BOOL)arg3 convertToLowercase:(BOOL)arg4 ;
-(BOOL)capitalizationToSplit;
-(void)setCapitalizationToSplit:(BOOL)arg1 ;
-(BOOL)convertToLowercase;
-(void)setConvertToLowercase:(BOOL)arg1 ;
@end

