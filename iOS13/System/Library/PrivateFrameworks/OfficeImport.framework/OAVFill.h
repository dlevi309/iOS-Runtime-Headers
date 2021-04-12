/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVFill : NSObject
+(void)readGradientFill:(id)arg1 fromManager:(id)arg2 ;
+(id)readBlipRefFromManager:(id)arg1 state:(id)arg2 ;
+(id)targetBgColorWithManager:(id)arg1 ;
+(void)addStopsFromArray:(const OAVGradientStop*)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 manager:(id)arg7 ;
+(void)readImageFill:(id)arg1 fromManager:(id)arg2 state:(id)arg3 ;
+(id)readFromManager:(id)arg1 state:(id)arg2 ;
+(id)targetFgColorWithManager:(id)arg1 ;
@end

