/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CRImageReaderOutput : NSObject <NSCopying, NSSecureCoding> {

	int _confidence;
	float _baselineAngle;
	NSString* _type;
	NSString* _stringValue;
	NSArray* _candidates;
	NSArray* _components;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomRight;
	CGPoint _bottomLeft;
	CGRect _boundingBox;

}

@property (retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign) int confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (assign) float baselineAngle;                 //@synthesize baselineAngle=_baselineAngle - In the implementation block
@property (readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (readonly) CGRect boundingBox;                //@synthesize boundingBox=_boundingBox - In the implementation block
@property (readonly) CGPoint topLeft;                   //@synthesize topLeft=_topLeft - In the implementation block
@property (readonly) CGPoint topRight;                  //@synthesize topRight=_topRight - In the implementation block
@property (readonly) CGPoint bottomRight;               //@synthesize bottomRight=_bottomRight - In the implementation block
@property (readonly) CGPoint bottomLeft;                //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (readonly) NSArray * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (readonly) NSArray * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)outputWithType:(id)arg1 textFeature:(id)arg2 options:(id)arg3 ;
+(int)confidenceLevelForConfidenceScore:(double)arg1 options:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSArray *)components;
-(int)confidence;
-(CGRect)boundingBox;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(NSArray *)candidates;
-(id)cornersForCharacterRange:(NSRange)arg1 error:(id*)arg2 ;
-(float)baselineAngle;
-(void)setBaselineAngle:(float)arg1 ;
-(id)initWithType:(id)arg1 textFeature:(id)arg2 withCandidates:(BOOL)arg3 options:(id)arg4 ;
-(id)initWithType:(id)arg1 textFeature:(id)arg2 options:(id)arg3 ;
-(CGPoint)_rotatePointIfNeccessary:(CGPoint)arg1 anchor:(CGPoint)arg2 angle:(double)arg3 ;
@end

