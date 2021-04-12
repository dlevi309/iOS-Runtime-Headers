/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class NSArray;

@interface UBProcessorInferenceResults : NSObject {

	int _status;
	CVBufferRef _skinMask;
	CVBufferRef _personMask;
	NSArray* _faceLandmarks;

}

@property (assign,nonatomic) int status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) CVBufferRef skinMask;                 //@synthesize skinMask=_skinMask - In the implementation block
@property (nonatomic,retain) CVBufferRef personMask;               //@synthesize personMask=_personMask - In the implementation block
@property (nonatomic,retain) NSArray * faceLandmarks;              //@synthesize faceLandmarks=_faceLandmarks - In the implementation block
-(void)dealloc;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setFaceLandmarks:(NSArray *)arg1 ;
-(CVBufferRef)skinMask;
-(CVBufferRef)personMask;
-(void)setSkinMask:(CVBufferRef)arg1 ;
-(void)setPersonMask:(CVBufferRef)arg1 ;
-(NSArray *)faceLandmarks;
@end

