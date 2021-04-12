/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultDataContext.h>

@class NSMutableArray, ARImageData, ARDeviceOrientationData, ARLocationData, ARWorldMap, NSMutableSet, NSString;

@interface ARFrameContext : NSObject <ARResultDataContext> {

	NSMutableArray* _anchorsToAdd;
	NSMutableArray* _anchorsToRemove;
	BOOL _didRelocalize;
	BOOL _sessionTransformUpdated;
	BOOL _sessionTransformReset;
	BOOL _sessionTransformShouldResumeCameraHeading;
	BOOL _sessionTransformShouldResumeCameraPosition;
	BOOL _shouldRemoveExistingAnchors;
	ARImageData* _imageData;
	ARDeviceOrientationData* _orientationData;
	ARLocationData* _locationData;
	long long _worldAlignment;
	ARWorldMap* _worldMap;
	unsigned long long _frameDebugOptions;
	NSMutableSet* _collaborationData;
	SCD_Struct_AR1 _relocalizationDeltaTransform;
	SCD_Struct_AR1 _sessionTransform;

}

@property (assign,nonatomic) BOOL didRelocalize;                                             //@synthesize didRelocalize=_didRelocalize - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 relocalizationDeltaTransform;                    //@synthesize relocalizationDeltaTransform=_relocalizationDeltaTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 sessionTransform;                                //@synthesize sessionTransform=_sessionTransform - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformUpdated;                                 //@synthesize sessionTransformUpdated=_sessionTransformUpdated - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformReset;                                   //@synthesize sessionTransformReset=_sessionTransformReset - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformShouldResumeCameraHeading;               //@synthesize sessionTransformShouldResumeCameraHeading=_sessionTransformShouldResumeCameraHeading - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformShouldResumeCameraPosition;              //@synthesize sessionTransformShouldResumeCameraPosition=_sessionTransformShouldResumeCameraPosition - In the implementation block
@property (nonatomic,readonly) BOOL shouldRemoveExistingAnchors;                             //@synthesize shouldRemoveExistingAnchors=_shouldRemoveExistingAnchors - In the implementation block
@property (nonatomic,retain) NSMutableSet * collaborationData;                               //@synthesize collaborationData=_collaborationData - In the implementation block
@property (nonatomic,retain) ARImageData * imageData;                                        //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) ARDeviceOrientationData * orientationData;                      //@synthesize orientationData=_orientationData - In the implementation block
@property (nonatomic,retain) ARLocationData * locationData;                                  //@synthesize locationData=_locationData - In the implementation block
@property (assign,nonatomic) long long worldAlignment;                                       //@synthesize worldAlignment=_worldAlignment - In the implementation block
@property (nonatomic,retain) ARWorldMap * worldMap;                                          //@synthesize worldMap=_worldMap - In the implementation block
@property (assign,nonatomic) unsigned long long frameDebugOptions;                           //@synthesize frameDebugOptions=_frameDebugOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(ARImageData *)imageData;
-(void)setImageData:(ARImageData *)arg1 ;
-(ARLocationData *)locationData;
-(void)setLocationData:(ARLocationData *)arg1 ;
-(long long)cameraPosition;
-(void)setWorldAlignment:(long long)arg1 ;
-(void)addAnchor:(id)arg1 ;
-(void)removeAnchor:(id)arg1 ;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)anchorsToAdd;
-(long long)worldAlignment;
-(unsigned long long)frameDebugOptions;
-(void)setFrameDebugOptions:(unsigned long long)arg1 ;
-(NSMutableSet *)collaborationData;
-(id)anchorsToRemove;
-(void)setSessionTransform:(SCD_Struct_AR1)arg1 ;
-(void)resetSessionTransform;
-(void)resumeSessionCameraPosition;
-(void)resumeSessionCameraPositionAndHeading;
-(void)clearAddedAnchors;
-(ARDeviceOrientationData *)orientationData;
-(void)setOrientationData:(ARDeviceOrientationData *)arg1 ;
-(ARWorldMap *)worldMap;
-(void)setWorldMap:(ARWorldMap *)arg1 ;
-(BOOL)didRelocalize;
-(void)setDidRelocalize:(BOOL)arg1 ;
-(SCD_Struct_AR1)relocalizationDeltaTransform;
-(void)setRelocalizationDeltaTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)sessionTransform;
-(BOOL)sessionTransformUpdated;
-(BOOL)sessionTransformReset;
-(BOOL)sessionTransformShouldResumeCameraHeading;
-(BOOL)sessionTransformShouldResumeCameraPosition;
-(BOOL)shouldRemoveExistingAnchors;
-(void)setCollaborationData:(NSMutableSet *)arg1 ;
@end

