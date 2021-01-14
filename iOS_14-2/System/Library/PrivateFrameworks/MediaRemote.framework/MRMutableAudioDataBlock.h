/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRAudioDataBlock.h>

@class MRAudioBuffer;

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (nonatomic,retain) MRAudioBuffer * buffer; 
@property (assign,nonatomic) SCD_Struct_MR20 time; 
@property (assign,nonatomic) float gain; 
-(void)setTime:(SCD_Struct_MR20)arg1 ;
-(void)setBuffer:(MRAudioBuffer *)arg1 ;
-(void)setGain:(float)arg1 ;
@end

