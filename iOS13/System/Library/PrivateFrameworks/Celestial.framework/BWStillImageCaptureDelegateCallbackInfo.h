/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageCaptureDelegateCallbackInfo : NSObject {

	unsigned _flag;
	SCD_Struct_BW2 _pts;
	BOOL _isPreBracketFrame;

}

@property (nonatomic,readonly) unsigned flag;                       //@synthesize flag=_flag - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 pts;                  //@synthesize pts=_pts - In the implementation block
@property (nonatomic,readonly) BOOL isPreBracketFrame;              //@synthesize isPreBracketFrame=_isPreBracketFrame - In the implementation block
-(id)initWithFlag:(unsigned)arg1 ;
-(unsigned)flag;
-(id)initWithFlag:(unsigned)arg1 pts:(SCD_Struct_BW2)arg2 isPreBracketFrame:(BOOL)arg3 ;
-(SCD_Struct_BW2)pts;
-(BOOL)isPreBracketFrame;
@end

