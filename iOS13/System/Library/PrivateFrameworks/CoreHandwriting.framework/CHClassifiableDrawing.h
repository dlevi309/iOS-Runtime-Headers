/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHDrawing, NSCharacterSet;

@interface CHClassifiableDrawing : NSObject {

	BOOL _expandCodePoints;
	BOOL _firstPointIsSubstrokeCut;
	BOOL _lastPointIsSubstrokeCut;
	CHDrawing* _drawing;
	NSCharacterSet* _characterSet;
	unsigned long long _maxCandidateCount;
	CGRect _normalizationContext;

}

@property (nonatomic,retain,readonly) CHDrawing * drawing;                        //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain,readonly) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
@property (nonatomic,readonly) BOOL expandCodePoints;                             //@synthesize expandCodePoints=_expandCodePoints - In the implementation block
@property (nonatomic,readonly) CGRect normalizationContext;                       //@synthesize normalizationContext=_normalizationContext - In the implementation block
@property (nonatomic,readonly) BOOL firstPointIsSubstrokeCut;                     //@synthesize firstPointIsSubstrokeCut=_firstPointIsSubstrokeCut - In the implementation block
@property (nonatomic,readonly) BOOL lastPointIsSubstrokeCut;                      //@synthesize lastPointIsSubstrokeCut=_lastPointIsSubstrokeCut - In the implementation block
@property (nonatomic,readonly) unsigned long long maxCandidateCount;              //@synthesize maxCandidateCount=_maxCandidateCount - In the implementation block
-(void)dealloc;
-(NSCharacterSet *)characterSet;
-(CHDrawing *)drawing;
-(id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(BOOL)arg3 normalizationContext:(CGRect)arg4 firstPointIsSubstrokeCut:(BOOL)arg5 lastPointIsSubstrokeCut:(BOOL)arg6 maxCandidateCount:(unsigned long long)arg7 ;
-(BOOL)expandCodePoints;
-(CGRect)normalizationContext;
-(BOOL)firstPointIsSubstrokeCut;
-(BOOL)lastPointIsSubstrokeCut;
-(unsigned long long)maxCandidateCount;
@end

