/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class NSMutableDictionary;

@interface LSCGainsPlist : NSObject {

	NSMutableDictionary* _lscGainsByPortType;

}
-(id)initWithDictionary:(id)arg1 metal:(id)arg2 ;
-(id)getTextureForPortType:(id)arg1 ;
-(id)getTextureMaxValueForPortType:(id)arg1 ;
-(int)fillLSCGainsTextureFrom:(SCD_Struct_LS52*)arg1 tex:(id)arg2 maxValuesRGBA:(float*)arg3 ;
@end

