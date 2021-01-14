/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSNumber, NSMutableSet, NSUUID;

@interface HMIPersonBlob : HMFObject {

	float _personIouMax;
	NSNumber* _personIndex;
	NSMutableSet* _personIndices;
	NSUUID* _blobID;
	CGSize _frameDimensions;
	CGPoint _position;
	CGVector _motionMean;
	CGRect _regionOfInterest;
	CGRect _faceBoundingBox;
	CGRect _personBoundingBox;

}

@property (readonly) CGSize frameDimensions;                  //@synthesize frameDimensions=_frameDimensions - In the implementation block
@property (readonly) CGRect regionOfInterest;                 //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (assign) CGRect faceBoundingBox;                    //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
@property (assign) CGRect personBoundingBox;                  //@synthesize personBoundingBox=_personBoundingBox - In the implementation block
@property (assign) CGPoint position;                          //@synthesize position=_position - In the implementation block
@property (assign) CGVector motionMean;                       //@synthesize motionMean=_motionMean - In the implementation block
@property (retain) NSNumber * personIndex;                    //@synthesize personIndex=_personIndex - In the implementation block
@property (retain) NSMutableSet * personIndices;              //@synthesize personIndices=_personIndices - In the implementation block
@property (assign) float personIouMax;                        //@synthesize personIouMax=_personIouMax - In the implementation block
@property (readonly) NSUUID * blobID;                         //@synthesize blobID=_blobID - In the implementation block
-(CGPoint)position;
-(CGRect)regionOfInterest;
-(CGSize)frameDimensions;
-(BOOL)isLost;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(NSUUID *)blobID;
-(BOOL)isMoving;
-(void)setPosition:(CGPoint)arg1 ;
-(CGRect)faceBoundingBox;
-(void)_computeBlobPropertiesWithBoundingBox:(CGRect)arg1 personBoundingBox:(CGRect)arg2 dx:(double)arg3 dy:(double)arg4 motionVectors:(id)arg5 isDetection:(BOOL)arg6 ;
-(CGRect)personBoundingBox;
-(CGVector)motionMean;
-(double)boxDistanceToPersonBlob:(id)arg1 ;
-(double)sizeDistanceToPersonBlob:(id)arg1 ;
-(BOOL)isBijectiveToPersonBlob:(id)arg1 ;
-(void)setPersonBoundingBox:(CGRect)arg1 ;
-(NSMutableSet *)personIndices;
-(NSNumber *)personIndex;
-(float)personIouMax;
-(void)setMotionMean:(CGVector)arg1 ;
-(id)initWithPersonWithFaceEvent:(id)arg1 motionVectors:(id)arg2 personIndex:(int)arg3 regionOfInterest:(CGRect)arg4 frameDimensions:(CGSize)arg5 ;
-(id)initWithPersonWithoutFaceEvent:(id)arg1 personIndex:(int)arg2 regionOfInterest:(CGRect)arg3 frameDimensions:(CGSize)arg4 ;
-(id)initWithPersonBlob:(id)arg1 motionVectors:(id)arg2 personIndex:(int)arg3 regionOfInterest:(CGRect)arg4 frameDimensions:(CGSize)arg5 ;
-(double)similarityToPersonBlob:(id)arg1 ;
-(void)adjustFaceBoundingBoxFromPersonBlob:(id)arg1 ;
-(void)setPersonIndex:(NSNumber *)arg1 ;
-(void)setPersonIndices:(NSMutableSet *)arg1 ;
-(void)setPersonIouMax:(float)arg1 ;
@end

