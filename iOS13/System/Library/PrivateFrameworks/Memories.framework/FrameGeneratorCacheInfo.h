/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class VideoMovie;

@interface FrameGeneratorCacheInfo : NSObject {

	VideoMovie* m_movie;
	SCD_Struct_PM5 m_time;
	CGSize m_size;
	double m_rotation;

}

@property (nonatomic,retain) VideoMovie * movie; 
@property (assign,nonatomic) SCD_Struct_PM5 time; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotation; 
-(void)dealloc;
-(CGSize)size;
-(SCD_Struct_PM5)time;
-(void)setSize:(CGSize)arg1 ;
-(void)setTime:(SCD_Struct_PM5)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(VideoMovie *)movie;
-(void)setMovie:(VideoMovie *)arg1 ;
@end

