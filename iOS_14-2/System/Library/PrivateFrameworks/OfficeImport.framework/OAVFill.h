/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

