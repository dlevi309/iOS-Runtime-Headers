/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture;
@class NSArray;

@interface BoundInferenceResults : NSObject {

	id<MTLTexture> _skinMask;
	id<MTLTexture> _personMask;
	NSArray* _faceLandmarks;

}

@property (nonatomic,retain) id<MTLTexture> skinMask;                //@synthesize skinMask=_skinMask - In the implementation block
@property (nonatomic,retain) id<MTLTexture> personMask;              //@synthesize personMask=_personMask - In the implementation block
@property (nonatomic,retain) NSArray * faceLandmarks;                //@synthesize faceLandmarks=_faceLandmarks - In the implementation block
-(void)setFaceLandmarks:(NSArray *)arg1 ;
-(id<MTLTexture>)skinMask;
-(id<MTLTexture>)personMask;
-(void)setSkinMask:(id<MTLTexture>)arg1 ;
-(void)setPersonMask:(id<MTLTexture>)arg1 ;
-(NSArray *)faceLandmarks;
-(id)initWithResult:(id)arg1 andMetal:(id)arg2 ;
@end

