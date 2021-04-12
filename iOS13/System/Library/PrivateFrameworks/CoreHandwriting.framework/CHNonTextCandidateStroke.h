/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CHStrokeIdentifier;
@class NSMutableDictionary, NSDictionary;

@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _supportByStrokeIdentifier;
	double _support;
	id<CHStrokeIdentifier> _strokeIdentifier;
	long long _classificationAsNonText;
	long long _substrokesCount;
	double _lineError;
	double _containerScore;
	double _lineOrientationAngle;
	double _boundsDiagonal;
	CGRect _bounds;
	CGRect _enlargedBounds;
	CGRect _rotatedBounds;

}

@property (nonatomic,readonly) long long classificationAsNonText;                            //@synthesize classificationAsNonText=_classificationAsNonText - In the implementation block
@property (nonatomic,readonly) long long substrokesCount;                                    //@synthesize substrokesCount=_substrokesCount - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * supportByStrokeIdentifier;              //@synthesize supportByStrokeIdentifier=_supportByStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) double lineError;                                             //@synthesize lineError=_lineError - In the implementation block
@property (nonatomic,readonly) double containerScore;                                        //@synthesize containerScore=_containerScore - In the implementation block
@property (nonatomic,readonly) double lineOrientationAngle;                                  //@synthesize lineOrientationAngle=_lineOrientationAngle - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double boundsDiagonal;                                        //@synthesize boundsDiagonal=_boundsDiagonal - In the implementation block
@property (nonatomic,readonly) CGRect enlargedBounds;                                        //@synthesize enlargedBounds=_enlargedBounds - In the implementation block
@property (nonatomic,readonly) CGRect rotatedBounds;                                         //@synthesize rotatedBounds=_rotatedBounds - In the implementation block
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier;               //@synthesize strokeIdentifier=_strokeIdentifier - In the implementation block
@property (nonatomic,readonly) long long effectiveClassification; 
@property (nonatomic,readonly) double support;                                               //@synthesize support=_support - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGRect)bounds;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(double)support;
-(id)initWithStrokeIdentifier:(id)arg1 substrokesCount:(long long)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 bounds:(CGRect)arg7 boundsDiagonal:(double)arg8 enlargedBounds:(CGRect)arg9 rotatedBounds:(CGRect)arg10 supportByStrokeIdentifier:(id)arg11 support:(double)arg12 ;
-(id)initWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 ;
-(long long)effectiveClassification;
-(long long)classificationAsNonText;
-(long long)substrokesCount;
-(NSDictionary *)supportByStrokeIdentifier;
-(double)lineError;
-(double)containerScore;
-(double)lineOrientationAngle;
-(double)boundsDiagonal;
-(CGRect)enlargedBounds;
-(CGRect)rotatedBounds;
@end

