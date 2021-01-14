/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveform.h>

@class NSMutableArray;

@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray * segments; 
-(void)addSegments:(id)arg1 ;
-(BOOL)clipToTimeRange:(SCD_Struct_RC7)arg1 ;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)addSegment:(id)arg1 ;
-(id)classForCoder;
-(void)removeAllSegments;
-(void)removeSegment:(id)arg1 ;
@end

