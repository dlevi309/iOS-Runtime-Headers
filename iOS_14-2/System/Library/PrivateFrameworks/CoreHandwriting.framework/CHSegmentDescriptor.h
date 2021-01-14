/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSMutableArray, NSNumber, CHCutPoint, NSArray;

@interface CHSegmentDescriptor : NSObject {

	NSMutableArray* _relatedSegmentIDs;
	NSNumber* _segmentID;
	CHCutPoint* _startCutPoint;
	CHCutPoint* _endCutPoint;
	double _trailingSpaceRatio;
	double _trailingSpaceProbability;
	double _trailingCharBoundaryProbability;
	CGRect _segmentBounds;
	CGRect _contextBounds;

}

@property (nonatomic,readonly) NSNumber * segmentID;                              //@synthesize segmentID=_segmentID - In the implementation block
@property (nonatomic,readonly) CHCutPoint * startCutPoint;                        //@synthesize startCutPoint=_startCutPoint - In the implementation block
@property (nonatomic,readonly) CHCutPoint * endCutPoint;                          //@synthesize endCutPoint=_endCutPoint - In the implementation block
@property (nonatomic,readonly) CGRect segmentBounds;                              //@synthesize segmentBounds=_segmentBounds - In the implementation block
@property (nonatomic,readonly) NSArray * relatedSegmentIDs; 
@property (assign,nonatomic) CGRect contextBounds;                                //@synthesize contextBounds=_contextBounds - In the implementation block
@property (assign,nonatomic) double trailingSpaceRatio;                           //@synthesize trailingSpaceRatio=_trailingSpaceRatio - In the implementation block
@property (assign,nonatomic) double trailingSpaceProbability;                     //@synthesize trailingSpaceProbability=_trailingSpaceProbability - In the implementation block
@property (assign,nonatomic) double trailingCharBoundaryProbability;              //@synthesize trailingCharBoundaryProbability=_trailingCharBoundaryProbability - In the implementation block
+(long long)indexForSegmentID:(id)arg1 fromSegments:(id)arg2 ;
+(id)generateSegmentsFromDrawing:(id)arg1 withSegmentationPoints:(id)arg2 buildingContextBoundsWithRadius:(long long)arg3 spaceProbabilities:(const vector<double, std::__1::allocator<double> >*)arg4 charBoundaryProbabilities:(const vector<double, std::__1::allocator<double> >*)arg5 extractDelayedStrokeIDs:(const set<long, std::__1::less<long>, std::__1::allocator<long> >*)arg6 extractedDelayedSegments:(id*)arg7 ;
+(id)generateSegmentsFromDrawing:(id)arg1 ;
+(id)resolvedCutPoint:(id)arg1 withReferenceDrawing:(id)arg2 ;
+(void)computeRelatedSegments:(id)arg1 withDelayedSegments:(id)arg2 ;
+(void)_computeLocalContextForSegments:(id)arg1 withContextSizeRadius:(long long)arg2 ;
+(void)_resassignSpaceProbabilitiesFromDelayedSegments:(id)arg1 toSegments:(id)arg2 ;
+(CGRect)boundingBoxFromSegmentID:(long long)arg1 toSegmentID:(long long)arg2 withSegments:(id)arg3 withSourceDrawing:(id)arg4 ;
-(long long)strokeCount;
-(void)dealloc;
-(CGRect)segmentBounds;
-(NSNumber *)segmentID;
-(NSArray *)relatedSegmentIDs;
-(id)strokeIndexSet;
-(double)trailingSpaceProbability;
-(double)trailingCharBoundaryProbability;
-(CHCutPoint *)startCutPoint;
-(CHCutPoint *)endCutPoint;
-(CGRect)contextBounds;
-(double)trailingSpaceRatio;
-(BOOL)isSinglePointSegment;
-(id)initWithSegmentID:(id)arg1 startCutPoint:(id)arg2 endCutPoint:(id)arg3 trailingSpaceProbability:(double)arg4 trailingCharBoundaryProbability:(double)arg5 referenceDrawing:(id)arg6 ;
-(void)_addRelatedSegmentID:(id)arg1 ;
-(void)setContextBounds:(CGRect)arg1 ;
-(void)setTrailingSpaceRatio:(double)arg1 ;
-(void)setTrailingSpaceProbability:(double)arg1 ;
-(void)setTrailingCharBoundaryProbability:(double)arg1 ;
@end

