/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NUBrushStroke;

@interface _NUBrushStrokeCIImageProvider : NSObject {

	NUBrushStroke* _stroke;
	BOOL _closed;
	long long _pressureMode;
	SCD_Struct_NU8 _extent;

}
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(id)initWithStroke:(id)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3 ;
@end

