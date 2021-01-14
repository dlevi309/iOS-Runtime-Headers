/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUKeyframeSequenceMatrixFloat33;

@interface PIReframeKeyframeSequence : NSObject {

	NUKeyframeSequenceMatrixFloat33* _homographySequence;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)sparseSequence;
-(long long)interpolation;
-(id)initWithKeyframeArray:(id)arg1 ;
-(SCD_Struct_PI9)homographyAtTime:(SCD_Struct_PI7)arg1 ;
@end

