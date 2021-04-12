/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUKeyframeSequenceMatrixFloat33;

@interface PIReframeKeyframeSequence : NSObject {

	NUKeyframeSequenceMatrixFloat33* _homographySequence;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(long long)interpolation;
-(id)sparseSequence;
-(id)initWithKeyframeArray:(id)arg1 ;
-(SCD_Struct_PI9)homographyAtTime:(SCD_Struct_PI8)arg1 ;
@end

