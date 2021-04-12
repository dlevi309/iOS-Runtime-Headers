/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWStillImageCaptureDelegateCallbackInfo : NSObject {

	unsigned _flag;
	SCD_Struct_BW8 _pts;
	BOOL _isPreBracketFrame;

}

@property (nonatomic,readonly) unsigned flag;                       //@synthesize flag=_flag - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 pts;                  //@synthesize pts=_pts - In the implementation block
@property (nonatomic,readonly) BOOL isPreBracketFrame;              //@synthesize isPreBracketFrame=_isPreBracketFrame - In the implementation block
-(SCD_Struct_BW8)pts;
-(id)initWithFlag:(unsigned)arg1 ;
-(id)initWithFlag:(unsigned)arg1 pts:(SCD_Struct_BW8)arg2 isPreBracketFrame:(BOOL)arg3 ;
-(unsigned)flag;
-(BOOL)isPreBracketFrame;
@end

