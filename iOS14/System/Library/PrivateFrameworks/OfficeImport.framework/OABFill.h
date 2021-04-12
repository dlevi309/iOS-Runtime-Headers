/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABFill : NSObject
+(void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3 ;
+(id)patternFromBlipId:(unsigned)arg1 blipName:(id)arg2 blipDataReference:(EshBlip*)arg3 state:(id)arg4 ;
+(void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3 ;
+(id)readFillFromFillPropertiesManager:(id)arg1 state:(id)arg2 ;
+(void)addStopsFromArray:(const OABGradientStop*)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toStopArray:(id)arg6 fillPropertiesManager:(id)arg7 ;
@end

