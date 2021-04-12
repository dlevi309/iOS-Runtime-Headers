/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKScene.h>

@class NSMutableArray, SKEffectNode, SKNode, BokehParallaxNode, SKLabelNode, WKMotionManager, NSString, SKSpriteNode, UIColor, NSArray;

@interface BokehParallaxScene : SKScene {

	double CAMERA_SPEED_X;
	double CAMERA_SPEED_Y;
	double CAMERA_DISTANCE;
	double DISTANCE_SCALE;
	double _filterCoefficient;
	NSMutableArray* _parallaxNodes;
	CGRect _cameraBounds;
	CGRect _worldBounds;
	CGRect _worldCameraBounds;
	SKEffectNode* _world;
	SKNode* _camera;
	BokehParallaxNode* _backdropNode;
	SKNode* _hudNode;
	SKLabelNode* _hudLabel;
	double _lastUpdate;
	double _dt;
	BOOL _cameraWander;
	WKMotionManager* _motionManager;
	NSString* _bgImageName;
	SKSpriteNode* _bgImageNode;
	double _timeLastGravitySample;
	unsigned long long _baseFrameInterval;
	unsigned long long _stillFrameInterval;
	UIColor* _baseColor;

}

@property (assign) CGRect cameraBox; 
@property (readonly) CGRect bgBox; 
@property (assign) CGPoint cameraLocation; 
@property (assign) double previewScale; 
@property (assign) double timeLastGravitySample;                       //@synthesize timeLastGravitySample=_timeLastGravitySample - In the implementation block
@property (readonly) NSArray * parallaxNodes; 
@property (assign) BOOL cameraShouldWander; 
@property (assign) unsigned long long baseFrameInterval;               //@synthesize baseFrameInterval=_baseFrameInterval - In the implementation block
@property (assign) unsigned long long stillFrameInterval;              //@synthesize stillFrameInterval=_stillFrameInterval - In the implementation block
@property (assign) double filterCoefficient; 
@property (retain) NSString * bgImageName; 
@property (assign) double bgImageAlpha; 
@property (assign) double bgImageZPos; 
@property (retain) UIColor * baseColor;                                //@synthesize baseColor=_baseColor - In the implementation block
-(void)dealloc;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)forceUpdate;
-(void)update:(double)arg1 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(UIColor *)baseColor;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)setBgImageAlpha:(double)arg1 ;
-(double)bgImageAlpha;
-(void)setBgImageZPos:(double)arg1 ;
-(double)bgImageZPos;
-(double)filterCoefficient;
-(void)setFilterCoefficient:(double)arg1 ;
-(void)setBgImageName:(NSString *)arg1 ;
-(NSString *)bgImageName;
-(void)setup_world;
-(void)setup_parallaxNodes;
-(void)computeCameraBox;
-(void)setCameraShouldWander:(BOOL)arg1 ;
-(BOOL)cameraShouldWander;
-(void)moveCameraToRandomPoint;
-(void)addLabel:(id)arg1 toNode:(id)arg2 ;
-(void)addParallaxNode:(id)arg1 ;
-(CGPoint)readGyro;
-(CGPoint)clampCameraPosition:(CGPoint)arg1 ;
-(CGPoint)getCameraPositionFromNormalized:(CGPoint)arg1 ;
-(void)setCameraLocation:(CGPoint)arg1 ;
-(CGPoint)cameraLocation;
-(void)updateParallaxNodes;
-(NSArray *)parallaxNodes;
-(CGRect)cameraBox;
-(void)setCameraBox:(CGRect)arg1 ;
-(CGRect)bgBox;
-(void)setPreviewScale:(double)arg1 ;
-(double)previewScale;
-(double)timeLastGravitySample;
-(void)setTimeLastGravitySample:(double)arg1 ;
-(unsigned long long)baseFrameInterval;
-(void)setBaseFrameInterval:(unsigned long long)arg1 ;
-(unsigned long long)stillFrameInterval;
-(void)setStillFrameInterval:(unsigned long long)arg1 ;
@end

