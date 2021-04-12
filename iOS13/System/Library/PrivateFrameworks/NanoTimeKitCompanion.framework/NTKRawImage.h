/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKRawImage : NSObject {

	int _width;
	int _height;
	const float* _contents;

}

@property (nonatomic,readonly) const float* contents;              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) int width;                          //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                         //@synthesize height=_height - In the implementation block
+(id)rawImageWithImage:(id)arg1 width:(int)arg2 height:(int)arg3 ;
-(void)dealloc;
-(const float*)contents;
-(int)width;
-(int)height;
-(void)write:(id)arg1 ;
-(id)scaleToWidth:(int)arg1 height:(int)arg2 ;
-(id)initWithContent:(1*)arg1 width:(int)arg2 height:(int)arg3 ;
@end

