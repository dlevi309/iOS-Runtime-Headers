/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMVideoCorruptor : NSObject
+(int)_getBoxInfoFromFile:(_sFILE*)arg1 ofSize:(long long)arg2 boxType:(unsigned*)arg3 boxSize:(long long*)arg4 ;
+(int)_findBox:(unsigned)arg1 inFile:(_sFILE*)arg2 ofSize:(long long)arg3 boxSize:(long long*)arg4 ;
+(int)_corruptMethodFytpForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(int)_corruptMethodMdatForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(int)_corruptMethodMoovForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(BOOL)corruptVideoFileAtURLWhenEnabled:(id)arg1 ;
@end

