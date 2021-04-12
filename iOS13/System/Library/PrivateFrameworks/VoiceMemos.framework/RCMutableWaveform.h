/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveform.h>

@class NSMutableArray;

@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray * segments; 
-(id)classForCoder;
-(void)removeAllSegments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)addSegment:(id)arg1 ;
-(void)addSegments:(id)arg1 ;
-(BOOL)clipToTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)removeSegment:(id)arg1 ;
@end

