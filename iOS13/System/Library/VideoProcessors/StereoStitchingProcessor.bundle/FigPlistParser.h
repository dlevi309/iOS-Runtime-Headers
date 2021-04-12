/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@interface FigPlistParser : NSObject {

	BOOL _missingKeyExpected;

}
-(id)init;
-(id)readKeyValue:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 ;
-(int)readKeyInteger:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(int*)arg4 ;
-(int)readKeyUInteger:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(unsigned*)arg4 ;
-(int)readKeyFloat:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(float*)arg4 ;
-(void)parseInt:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(int*)arg4 ;
-(void)parseInt32:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(int*)arg4 ;
-(void)parseUint:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(unsigned*)arg4 ;
-(void)parseUshort:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(unsigned short*)arg4 ;
-(void)parseBool:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(BOOL*)arg4 ;
-(void)parseFloat:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(float*)arg4 ;
-(void)parseAdcFloat:(id)arg1 keyName:(id)arg2 keyIndex:(int)arg3 outValue:(double*)arg4 ;
@end

