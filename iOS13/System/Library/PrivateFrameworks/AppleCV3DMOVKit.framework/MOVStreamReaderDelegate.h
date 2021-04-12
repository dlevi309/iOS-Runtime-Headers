/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@protocol MOVStreamReaderDelegate <NSObject>
@optional
-(unsigned)reader:(id)arg1 pixelFormatForStream:(id)arg2 suggestedFormat:(unsigned)arg3;
-(void)reader:(id)arg1 didReceiveWarning:(id)arg2;
-(unsigned)reader:(id)arg1 bytesPerRowForStream:(id)arg2 storedValue:(unsigned)arg3;
-(unsigned)pixelFormatForUnknownTrackOfReader:(id)arg1;
-(void)reader:(id)arg1 readUnknownMetadataList:(id)arg2 associatedTo:(id)arg3 inTimeRange:(SCD_Struct_MO6)arg4;
-(BOOL)readerReadMetadata:(id)arg1;

@end

