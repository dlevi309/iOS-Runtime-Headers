/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWUBSemanticRenderingInput : NSObject {

	CVBufferRef _skinMask;
	CVBufferRef _lowResPersonMask;
	NSArray* _faceObservations;

}

@property (nonatomic,readonly) CVBufferRef skinMask;                      //@synthesize skinMask=_skinMask - In the implementation block
@property (nonatomic,readonly) CVBufferRef lowResPersonMask;              //@synthesize lowResPersonMask=_lowResPersonMask - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                //@synthesize faceObservations=_faceObservations - In the implementation block
-(void)dealloc;
-(id)initWithSkinMask:(CVBufferRef)arg1 lowResPersonMask:(CVBufferRef)arg2 faceObservations:(id)arg3 ;
-(CVBufferRef)skinMask;
-(NSArray *)faceObservations;
-(CVBufferRef)lowResPersonMask;
@end

