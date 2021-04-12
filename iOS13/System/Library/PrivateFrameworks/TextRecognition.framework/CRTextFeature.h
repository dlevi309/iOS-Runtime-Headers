/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, CRImage, NSNumber;

@interface CRTextFeature : NSObject <NSCoding, NSCopying> {

	BOOL _shouldExpandToFullWidth;
	unsigned char _sizeHint;
	BOOL _contextSet;
	float _baselineAngle;
	float _textlineHeight;
	int _featureMapID;
	int _punctuationGuess;
	NSArray* _subFeatures;
	NSArray* _stringValueCandidates;
	NSArray* _candidateProbs;
	NSArray* _subFeatureCandidates;
	long long _bestCandidateIndex;
	NSArray* _segmentationBreakPoints;
	NSString* _stringValue;
	NSString* _gtStringValue;
	CRImage* _imageCut;
	NSNumber* _confidence;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomLeft;
	CGPoint _bottomRight;
	CGPoint _toplineOrigin;
	CGPoint _baselineOrigin;
	CGRect _bounds;

}

@property (assign) BOOL contextSet;                                 //@synthesize contextSet=_contextSet - In the implementation block
@property (assign) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGPoint topLeft;                                 //@synthesize topLeft=_topLeft - In the implementation block
@property (assign) CGPoint topRight;                                //@synthesize topRight=_topRight - In the implementation block
@property (assign) CGPoint bottomLeft;                              //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (assign) CGPoint bottomRight;                             //@synthesize bottomRight=_bottomRight - In the implementation block
@property (retain) NSArray * subFeatures;                           //@synthesize subFeatures=_subFeatures - In the implementation block
@property (retain) NSArray * stringValueCandidates;                 //@synthesize stringValueCandidates=_stringValueCandidates - In the implementation block
@property (retain) NSArray * candidateProbs;                        //@synthesize candidateProbs=_candidateProbs - In the implementation block
@property (retain) NSArray * subFeatureCandidates;                  //@synthesize subFeatureCandidates=_subFeatureCandidates - In the implementation block
@property (assign) long long bestCandidateIndex;                    //@synthesize bestCandidateIndex=_bestCandidateIndex - In the implementation block
@property (retain) NSArray * segmentationBreakPoints;               //@synthesize segmentationBreakPoints=_segmentationBreakPoints - In the implementation block
@property (assign) BOOL shouldExpandToFullWidth;                    //@synthesize shouldExpandToFullWidth=_shouldExpandToFullWidth - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSString * gtStringValue;              //@synthesize gtStringValue=_gtStringValue - In the implementation block
@property (retain) CRImage * imageCut;                              //@synthesize imageCut=_imageCut - In the implementation block
@property (retain) NSNumber * confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (readonly) CGPoint toplineOrigin;                         //@synthesize toplineOrigin=_toplineOrigin - In the implementation block
@property (readonly) CGPoint baselineOrigin;                        //@synthesize baselineOrigin=_baselineOrigin - In the implementation block
@property (assign) float baselineAngle;                             //@synthesize baselineAngle=_baselineAngle - In the implementation block
@property (assign) unsigned char sizeHint;                          //@synthesize sizeHint=_sizeHint - In the implementation block
@property (assign) float textlineHeight;                            //@synthesize textlineHeight=_textlineHeight - In the implementation block
@property (assign) int featureMapID;                                //@synthesize featureMapID=_featureMapID - In the implementation block
@property (assign) int punctuationGuess;                            //@synthesize punctuationGuess=_punctuationGuess - In the implementation block
+(id)sortedTextFeatures:(id)arg1 ;
+(id)lineFeatures:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 ;
+(id)overlayFeatures:(id)arg1 onImage:(id)arg2 showSubFeatures:(BOOL)arg3 ;
+(id)overlayFeaturesVertices:(id)arg1 onImage:(id)arg2 showSubFeatures:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSNumber *)confidence;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(NSArray *)subFeatures;
-(void)setTopLeft:(CGPoint)arg1 ;
-(void)setTopRight:(CGPoint)arg1 ;
-(void)setBottomRight:(CGPoint)arg1 ;
-(void)setBottomLeft:(CGPoint)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setConfidence:(NSNumber *)arg1 ;
-(id)initWithSubfeatures:(id)arg1 ;
-(float)baselineAngle;
-(BOOL)shouldExpandToFullWidth;
-(void)setImageCut:(CRImage *)arg1 ;
-(void)addKohlsDigitProjection;
-(id)initWithVNTextObsevation:(id)arg1 ;
-(void)setShouldExpandToFullWidth:(BOOL)arg1 ;
-(BOOL)isDown;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(void)setFeatureMapID:(int)arg1 ;
-(void)setPunctuationGuess:(int)arg1 ;
-(void)updateSizeHints;
-(int)featureMapID;
-(NSArray *)stringValueCandidates;
-(NSArray *)candidateProbs;
-(BOOL)isUp;
-(void)setCandidateProbs:(NSArray *)arg1 ;
-(id)initWithSubfeatures:(id)arg1 stringValue:(id)arg2 ;
-(void)setStringValueCandidates:(NSArray *)arg1 ;
-(void)setSubFeatureCandidates:(NSArray *)arg1 ;
-(void)setBaselineAngle:(float)arg1 ;
-(void)scale:(CGPoint)arg1 offset:(CGPoint)arg2 ;
-(id)wordFeatures;
-(id)initWithFeatureRect:(id)arg1 subFeatureRects:(id)arg2 ;
-(CGPoint)baselineOrigin;
-(CGPoint)toplineOrigin;
-(void)setBaselineOrigin:(CGPoint)arg1 toplineOrigin:(CGPoint)arg2 slope:(float)arg3 ;
-(int)punctuationGuess;
-(void)setTextlineHeight:(float)arg1 ;
-(void)setBestCandidateIndex:(long long)arg1 ;
-(id)initWithCITextFeature:(id)arg1 inImage:(id)arg2 ;
-(CRImage *)imageCut;
-(NSArray *)subFeatureCandidates;
-(NSString *)gtStringValue;
-(void)setGtStringValue:(NSString *)arg1 ;
-(long long)bestCandidateIndex;
-(NSArray *)segmentationBreakPoints;
-(void)setSegmentationBreakPoints:(NSArray *)arg1 ;
-(float)textlineHeight;
-(unsigned char)sizeHint;
-(void)setSizeHint:(unsigned char)arg1 ;
-(id)initWithFeatureRect:(CGRect)arg1 inImage:(id)arg2 ;
-(id)initWithFeatureRect:(id)arg1 subFeatureRects:(id)arg2 inImage:(id)arg3 ;
-(id)initWithCCFeatureRect:(id)arg1 subFeatureRects:(id)arg2 rotatePortrait:(BOOL)arg3 ;
-(id)textFeatureScaledToImageWidth:(float)arg1 height:(float)arg2 ;
-(id)textFeaturebyPaddingToWidth:(float)arg1 height:(float)arg2 ;
-(float)slopeOfSubFeatures;
-(id)textFeatureScaledToImage:(id)arg1 ;
-(BOOL)contextSet;
-(void)setContextSet:(BOOL)arg1 ;
-(void)estimateTopAndBaseline;
-(CGPoint)getBaselineVector;
-(id)initWithTopLeft:(CGPoint)arg1 TopRight:(CGPoint)arg2 BottomLeft:(CGPoint)arg3 BottomRight:(CGPoint)arg4 ;
-(id)initWithSubfeatureRects:(id)arg1 inImage:(id)arg2 ;
-(id)textFeatureSplitForStringValue:(id)arg1 ;
-(float)caseInsensitiveProbabilityCandidateIndex:(int)arg1 ;
-(void)adjustProbabilitiesWithPunctuationGuess;
-(id)createCharacterSubFeaturesForCandidateAtIndex:(long long)arg1 ;
-(float)aspectRatioWithImageSize:(CGSize)arg1 ;
-(id)createWordSubFeaturesForCandidateAtIndex:(long long)arg1 topWhiteSpacePoints:(id)arg2 bottomWhiteSpacePoints:(id)arg3 ;
-(float)calculateTextBoxHeight;
@end

