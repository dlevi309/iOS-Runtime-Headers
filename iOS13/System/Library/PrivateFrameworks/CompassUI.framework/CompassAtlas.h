/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassAtlasManifest;

@interface CompassAtlas : NSObject {

	unsigned _texName;
	CompassAtlasManifest* _manifest;
	CGSize _size;

}
-(void)dealloc;
-(void)bind;
-(id)initWithImageData:(char*)arg1 manifest:(id)arg2 ;
-(SCD_Struct_Co3)metadataForImageNamed:(id)arg1 ;
@end

