/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRAudioDataBlock.h>

@class MRAudioBuffer;

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (nonatomic,retain) MRAudioBuffer * buffer; 
@property (assign,nonatomic) SCD_Struct_MR19 time; 
@property (assign,nonatomic) float gain; 
-(void)setBuffer:(MRAudioBuffer *)arg1 ;
-(void)setTime:(SCD_Struct_MR19)arg1 ;
-(void)setGain:(float)arg1 ;
@end

