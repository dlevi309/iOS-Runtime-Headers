/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@interface AVTimecode : NSObject {

	unsigned _tc_flags;
	long long _frameNumber;
	CVSMPTETime _timecodeStruct;
	SCD_Struct_AV3 _frameDuration;

}

@property (assign,nonatomic) CVSMPTETime timecodeStruct;                //@synthesize timecodeStruct=_timecodeStruct - In the implementation block
@property (assign,nonatomic) long long frameNumber;                     //@synthesize frameNumber=_frameNumber - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV3 frameDuration;              //@synthesize frameDuration=_frameDuration - In the implementation block
@property (assign,nonatomic) unsigned tc_flags;                         //@synthesize tc_flags=_tc_flags - In the implementation block
-(unsigned)tc_flags;
-(long long)frameNumber;
-(id)initWithTimecodeString:(id)arg1 ;
-(BOOL)stringIsValidNumericValue:(id)arg1 ;
-(CVSMPTETime)timecodeStruct;
-(void)setTc_flags:(unsigned)arg1 ;
-(void)setFrameDuration:(SCD_Struct_AV3)arg1 ;
-(void)setTimecodeStruct:(CVSMPTETime)arg1 ;
-(void)setFrameNumber:(long long)arg1 ;
-(SCD_Struct_AV3)frameDuration;
@end

