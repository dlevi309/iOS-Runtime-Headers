/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLBuffer <MTLResource>
@property (readonly) unsigned long long length; 
@required
-(unsigned long long)length;
-(void*)contents;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2;
-(void)removeAllDebugMarkers;
-(void)didModifyRange:(NSRange)arg1;

@end

