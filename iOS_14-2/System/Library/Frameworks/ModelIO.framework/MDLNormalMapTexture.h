/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/MDLTexture.h>

@class MDLTexture;

@interface MDLNormalMapTexture : MDLTexture {

	float _smoothness;
	float _contrast;
	MDLTexture* _sourceTexture;

}
-(id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2 ;
-(id)initByGeneratingNormalMapWithTexture:(id)arg1 name:(id)arg2 smoothness:(float)arg3 contrast:(float)arg4 ;
@end

