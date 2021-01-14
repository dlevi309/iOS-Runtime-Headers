/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@interface VFXREDrawCall : NSObject {

	 drawCall;
	 material;
	 aabb;

}
-(long long)vertexCount;
-(id)init;
-(long long)instanceCount;
-(unsigned long long)primitiveType;
-(unsigned long long)materialIdentifier;
-(void)enumerateBuffers:(/*^block*/id)arg1 ;
-(void)enumerateTextures:(/*^block*/id)arg1 ;
-(1)boundingBoxMin;
-(1)boundingBoxMax;
@end

