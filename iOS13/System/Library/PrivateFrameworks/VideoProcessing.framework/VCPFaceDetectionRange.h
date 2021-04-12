/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFaceDetectionRange : NSObject {

	unsigned long long _flags;
	unsigned long long _position;
	unsigned long long _faceID;
	SCD_Struct_VC6 _start;
	SCD_Struct_VC6 _last;
	CGRect _bounds;

}

@property (assign) SCD_Struct_VC6 start;                     //@synthesize start=_start - In the implementation block
@property (assign) SCD_Struct_VC6 last;                      //@synthesize last=_last - In the implementation block
@property (assign) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (assign) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (assign) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (assign) unsigned long long faceID;                //@synthesize faceID=_faceID - In the implementation block
-(unsigned long long)flags;
-(SCD_Struct_VC6)start;
-(unsigned long long)position;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setStart:(SCD_Struct_VC6)arg1 ;
-(void)setLast:(SCD_Struct_VC6)arg1 ;
-(SCD_Struct_VC6)last;
-(unsigned long long)faceID;
-(void)setFaceID:(unsigned long long)arg1 ;
@end

