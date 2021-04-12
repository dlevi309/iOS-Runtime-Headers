/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSDictionary, NSURL, NSArray;

@interface ADNetworkProvider : NSObject {

	NSDictionary* _ioBufferMap;
	NSDictionary* _portraitSizeForInput;
	NSDictionary* _landscapeSizeForInput;
	NSDictionary* _portraitSizeForOutput;
	NSDictionary* _landscapeSizeForOutput;
	BOOL _isOutputInversed;
	float _lowConfidenceThresholdSuggestion;
	float _highConfidenceThresholdSuggestion;
	NSURL* _url;
	NSArray* _layoutNames;
	unsigned long long _rawConfidenceUnits;

}

@property (assign) BOOL isOutputInversed;                                //@synthesize isOutputInversed=_isOutputInversed - In the implementation block
@property (retain) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (retain) NSArray * layoutNames;                                //@synthesize layoutNames=_layoutNames - In the implementation block
@property (assign) unsigned long long rawConfidenceUnits;                //@synthesize rawConfidenceUnits=_rawConfidenceUnits - In the implementation block
@property (assign) float lowConfidenceThresholdSuggestion;               //@synthesize lowConfidenceThresholdSuggestion=_lowConfidenceThresholdSuggestion - In the implementation block
@property (assign) float highConfidenceThresholdSuggestion;              //@synthesize highConfidenceThresholdSuggestion=_highConfidenceThresholdSuggestion - In the implementation block
+(id)providerForNetwork:(id)arg1 prioritization:(long long)arg2 ;
+(id)getEspressoFileNameForNetwork:(id)arg1 andPriority:(long long)arg2 ;
+(id)getConfigFolderForNetwork:(id)arg1 ;
+(id)getDefaultPathForNetwork:(id)arg1 andPriority:(long long)arg2 ;
+(id)getAlternativePathForNetwork:(id)arg1 andPriority:(long long)arg2 ;
+(BOOL)getAndVerifyDimensionsFromConfig:(id)arg1 inDictionary:(id)arg2 forKey:(id)arg3 dimensions:(id)arg4 layout:(unsigned long long*)arg5 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)bufferNameForType:(id)arg1 ;
-(CGSize)portraitSizeForInput:(id)arg1 ;
-(CGSize)portraitSizeForOutput:(id)arg1 ;
-(BOOL)isOutputInversed;
-(CGSize)portraitSizeForOutputOfType:(id)arg1 ;
-(CGSize)landscapeSizeForInput:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 prioritization:(long long)arg2 ;
-(CGSize)landscapeSizeForOutput:(id)arg1 ;
-(CGSize)portraitSizeForInputOfType:(id)arg1 ;
-(CGSize)landscapeSizeForInputOfType:(id)arg1 ;
-(CGSize)landscapeSizeForOutputOfType:(id)arg1 ;
-(void)setIsOutputInversed:(BOOL)arg1 ;
-(NSArray *)layoutNames;
-(void)setLayoutNames:(NSArray *)arg1 ;
-(unsigned long long)rawConfidenceUnits;
-(void)setRawConfidenceUnits:(unsigned long long)arg1 ;
-(float)lowConfidenceThresholdSuggestion;
-(void)setLowConfidenceThresholdSuggestion:(float)arg1 ;
-(float)highConfidenceThresholdSuggestion;
-(void)setHighConfidenceThresholdSuggestion:(float)arg1 ;
@end

