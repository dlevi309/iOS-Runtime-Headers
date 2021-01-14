/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLBuffer <MTLResource>
@property (readonly) unsigned long long length; 
@required
-(void*)contents;
-(unsigned long long)length;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2;
-(void)didModifyRange:(NSRange)arg1;
-(void)removeAllDebugMarkers;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;

@end

