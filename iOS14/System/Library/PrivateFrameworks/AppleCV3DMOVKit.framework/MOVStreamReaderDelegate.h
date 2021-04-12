/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@protocol MOVStreamReaderDelegate <MOVStreamReaderDelegateDeprecated,NSObject>
@optional
-(unsigned)reader:(id)arg1 pixelFormatForStream:(id)arg2 suggestedFormat:(unsigned)arg3;
-(void)reader:(id)arg1 didReceiveWarning:(id)arg2;
-(unsigned)reader:(id)arg1 bytesPerRowForStream:(id)arg2 storedValue:(unsigned)arg3;
-(unsigned)pixelFormatForUnknownTrackOfReader:(id)arg1;

@end

