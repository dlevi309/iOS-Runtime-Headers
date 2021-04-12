/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassAtlasManifest;

@interface CompassAtlas : NSObject {

	unsigned _texName;
	CompassAtlasManifest* _manifest;
	CGSize _size;

}
-(void)bind;
-(void)dealloc;
-(id)initWithImageData:(char*)arg1 manifest:(id)arg2 ;
-(SCD_Struct_Co3)metadataForImageNamed:(id)arg1 ;
@end

