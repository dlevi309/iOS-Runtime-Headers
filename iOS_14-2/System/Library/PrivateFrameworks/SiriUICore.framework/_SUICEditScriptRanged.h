/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/_SUICEditScript.h>

@class _SUICAtomRanged, NSString;

@interface _SUICEditScriptRanged : _SUICEditScript {

	long long _options;
	_SUICAtomRanged* _currentScriptAtom;

}

@property (nonatomic,__weak,readonly) NSString * stringA; 
@property (nonatomic,__weak,readonly) NSString * stringB; 
+(id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(BOOL)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6 ;
+(id)editScriptFromString:(id)arg1 toString:(id)arg2 ;
+(id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 ;
+(id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 ;
-(void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long*)arg1 andReverseIndexOfLastDifference:(long long*)arg2 shouldShortenFirstDifference:(BOOL)arg3 ;
-(id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(BOOL)arg6 options:(long long)arg7 ;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(NSString *)stringA;
-(NSString *)stringB;
-(void)initializeCurrentScriptAtom;
-(void)finalizeCurrentScriptAtom;
-(void)computeSmallestSingleEdit;
-(id)applyToString:(id)arg1 ;
@end

