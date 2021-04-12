/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@interface DFPPrepareDescriptor : NSObject {

	BOOL _allowModifyingInputBuffers;
	int _width;
	int _height;
	unsigned _pixelFormat;

}

@property (assign,nonatomic) int width;                                    //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) int height;                                   //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                         //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) BOOL allowModifyingInputBuffers;              //@synthesize allowModifyingInputBuffers=_allowModifyingInputBuffers - In the implementation block
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)setAllowModifyingInputBuffers:(BOOL)arg1 ;
-(BOOL)allowModifyingInputBuffers;
@end

