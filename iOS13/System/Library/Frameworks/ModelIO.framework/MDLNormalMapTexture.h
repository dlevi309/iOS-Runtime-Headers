/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/MDLTexture.h>

@class MDLTexture;

@interface MDLNormalMapTexture : MDLTexture {

	float _smoothness;
	float _contrast;
	MDLTexture* _sourceTexture;

}
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)initByGeneratingNormalMapWithTexture:(id)arg1 name:(id)arg2 smoothness:(float)arg3 contrast:(float)arg4 ;
@end

