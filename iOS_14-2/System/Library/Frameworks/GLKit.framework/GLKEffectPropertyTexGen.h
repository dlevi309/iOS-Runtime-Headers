/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTexGen : GLKEffectProperty {

	int _mode;
	float* _plane;
	int _coord;
	int _modeLoc;
	int _planeLoc;
	int _eyePlaneByInvModelviewLoc;
	unsigned _textureIndex;
	float* _eyePlaneByInvModelview;
	char* _modeNameString;
	char* _planeNameString;

}

@property (assign,nonatomic) float* eyePlaneByInvModelview;              //@synthesize eyePlaneByInvModelview=_eyePlaneByInvModelview - In the implementation block
@property (assign,nonatomic) int modeLoc;                                //@synthesize modeLoc=_modeLoc - In the implementation block
@property (assign,nonatomic) int planeLoc;                               //@synthesize planeLoc=_planeLoc - In the implementation block
@property (assign,nonatomic) int eyePlaneByInvModelviewLoc;              //@synthesize eyePlaneByInvModelviewLoc=_eyePlaneByInvModelviewLoc - In the implementation block
@property (assign,nonatomic) char* modeNameString;                       //@synthesize modeNameString=_modeNameString - In the implementation block
@property (assign,nonatomic) char* planeNameString;                      //@synthesize planeNameString=_planeNameString - In the implementation block
@property (assign,nonatomic) unsigned textureIndex;                      //@synthesize textureIndex=_textureIndex - In the implementation block
@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int coord;                                //@synthesize coord=_coord - In the implementation block
@property (assign,nonatomic) float* plane;                               //@synthesize plane=_plane - In the implementation block
-(int)mode;
-(int)coord;
-(id)init;
-(void)bind;
-(float*)plane;
-(void)setMode:(int)arg1 ;
-(int)modeLoc;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)setTextureIndex:(unsigned)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(void)setModeLoc:(int)arg1 ;
-(void)setModeNameString:(char*)arg1 ;
-(void)setPlaneNameString:(char*)arg1 ;
-(char*)modeNameString;
-(char*)planeNameString;
-(id)initWithMode:(int)arg1 coord:(int)arg2 ;
-(void)setPlane:(float*)arg1 ;
-(float*)eyePlaneByInvModelview;
-(void)setEyePlaneByInvModelview:(float*)arg1 ;
-(int)planeLoc;
-(void)setPlaneLoc:(int)arg1 ;
-(int)eyePlaneByInvModelviewLoc;
-(void)setEyePlaneByInvModelviewLoc:(int)arg1 ;
-(unsigned)textureIndex;
@end

