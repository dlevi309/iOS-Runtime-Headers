/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@interface AVTimecode : NSObject {

	unsigned _tc_flags;
	long long _frameNumber;
	opaqueCMFormatDescriptionRef _formatDescription;
	CVSMPTETime _timecodeStruct;
	SCD_Struct_AV10 _frameDuration;

}

@property (assign,nonatomic) CVSMPTETime timecodeStruct;                                  //@synthesize timecodeStruct=_timecodeStruct - In the implementation block
@property (assign,nonatomic) long long frameNumber;                                       //@synthesize frameNumber=_frameNumber - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV10 frameDuration;                               //@synthesize frameDuration=_frameDuration - In the implementation block
@property (assign,nonatomic) unsigned tc_flags;                                           //@synthesize tc_flags=_tc_flags - In the implementation block
@property (assign,nonatomic) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
-(opaqueCMFormatDescriptionRef)formatDescription;
-(SCD_Struct_AV10)frameDuration;
-(void)setFrameDuration:(SCD_Struct_AV10)arg1 ;
-(void)setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(CVSMPTETime)timecodeStruct;
-(void)setTimecodeStruct:(CVSMPTETime)arg1 ;
-(long long)frameNumber;
-(void)setFrameNumber:(long long)arg1 ;
-(unsigned)tc_flags;
-(void)setTc_flags:(unsigned)arg1 ;
@end

