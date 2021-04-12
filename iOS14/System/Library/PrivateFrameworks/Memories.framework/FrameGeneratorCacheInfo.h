/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class VideoMovie;

@interface FrameGeneratorCacheInfo : NSObject {

	VideoMovie* m_movie;
	SCD_Struct_PM8 m_time;
	CGSize m_size;
	double m_rotation;

}

@property (nonatomic,retain) VideoMovie * movie; 
@property (assign,nonatomic) SCD_Struct_PM8 time; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotation; 
-(SCD_Struct_PM8)time;
-(void)setTime:(SCD_Struct_PM8)arg1 ;
-(VideoMovie *)movie;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setMovie:(VideoMovie *)arg1 ;
-(void)dealloc;
@end

