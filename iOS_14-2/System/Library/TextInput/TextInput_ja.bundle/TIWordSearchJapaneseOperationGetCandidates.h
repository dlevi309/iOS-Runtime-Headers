/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInputCore/TIWordSearchOperationGetCandidates.h>

@class NSString;

@interface TIWordSearchJapaneseOperationGetCandidates : TIWordSearchOperationGetCandidates {

	BOOL _flickUsed;
	BOOL _phraseBoundarySet;
	BOOL _allowIncompleteRomaji;
	BOOL _referenceMode;
	BOOL _singlePhrase;
	NSString* _contextString;
	NSString* _previousCacheKey;

}

@property (nonatomic,copy) NSString * previousCacheKey;               //@synthesize previousCacheKey=_previousCacheKey - In the implementation block
@property (nonatomic,readonly) NSString * contextString;              //@synthesize contextString=_contextString - In the implementation block
@property (assign,nonatomic) BOOL flickUsed;                          //@synthesize flickUsed=_flickUsed - In the implementation block
@property (assign,nonatomic) BOOL phraseBoundarySet;                  //@synthesize phraseBoundarySet=_phraseBoundarySet - In the implementation block
@property (assign,nonatomic) BOOL allowIncompleteRomaji;              //@synthesize allowIncompleteRomaji=_allowIncompleteRomaji - In the implementation block
@property (assign,nonatomic) BOOL referenceMode;                      //@synthesize referenceMode=_referenceMode - In the implementation block
@property (assign,nonatomic) BOOL singlePhrase;                       //@synthesize singlePhrase=_singlePhrase - In the implementation block
-(id)results;
-(NSString *)contextString;
-(BOOL)phraseBoundarySet;
-(BOOL)allowIncompleteRomaji;
-(BOOL)referenceMode;
-(BOOL)flickUsed;
-(BOOL)singlePhrase;
-(void)setFlickUsed:(BOOL)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 contextString:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 predictionEnabled:(BOOL)arg5 reanalysisMode:(BOOL)arg6 autocapitalizationType:(unsigned long long)arg7 target:(id)arg8 action:(SEL)arg9 geometryModelData:(id)arg10 flickUsed:(BOOL)arg11 phraseBoundarySet:(BOOL)arg12 hardwareKeyboardMode:(BOOL)arg13 logger:(id)arg14 ;
-(void)setReferenceMode:(BOOL)arg1 ;
-(void)setAllowIncompleteRomaji:(BOOL)arg1 ;
-(void)checkForCachedResultsIfNeeded;
-(NSString *)previousCacheKey;
-(void)setPreviousCacheKey:(NSString *)arg1 ;
-(void)setPhraseBoundarySet:(BOOL)arg1 ;
-(void)setSinglePhrase:(BOOL)arg1 ;
@end

