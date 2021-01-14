/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock;

@interface PPBaseScoreInputSet : NSObject {

	_PASLock* _scalarMap;
	_PASLock* _arrayMap;
	_PASLock* _objectMap;

}
+(/*^block*/id)coreMLModelPathBlock;
-(id)init;
-(unsigned long long)minObjectScoreIndex;
-(unsigned long long)minArrayScoreIndex;
-(id)nameForScalarScoreIndex:(unsigned long long)arg1 ;
-(id)nameForArrayScoreIndex:(unsigned long long)arg1 ;
-(unsigned long long)objectScoreIndexUpperBound;
-(unsigned long long)undefinedScalarScoreIndex;
-(unsigned long long)minScalarScoreIndex;
-(unsigned long long)undefinedObjectScoreIndex;
-(id)nameForObjectScoreIndex:(unsigned long long)arg1 ;
-(unsigned long long)arrayScoreIndexUpperBound;
-(unsigned long long)scalarScoreIndexUpperBound;
-(unsigned long long)undefinedArrayScoreIndex;
-(unsigned long long)indexForScalarScoreName:(id)arg1 ;
-(unsigned long long)indexForArrayScoreName:(id)arg1 ;
-(unsigned long long)indexForObjectScoreName:(id)arg1 ;
@end

