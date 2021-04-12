/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSceneObservation, VNClassificationCustomHierarchy;

@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration {

	VNSceneObservation* _sceneObservation;
	VNClassificationCustomHierarchy* _customHierarchy;
	unsigned long long _maximumLeafObservations;
	unsigned long long _maximumHierarchicalObservations;

}

@property (nonatomic,retain) VNSceneObservation * sceneObservation;                           //@synthesize sceneObservation=_sceneObservation - In the implementation block
@property (nonatomic,retain) VNClassificationCustomHierarchy * customHierarchy;               //@synthesize customHierarchy=_customHierarchy - In the implementation block
@property (assign,nonatomic) unsigned long long maximumLeafObservations;                      //@synthesize maximumLeafObservations=_maximumLeafObservations - In the implementation block
@property (assign,nonatomic) unsigned long long maximumHierarchicalObservations;              //@synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(VNSceneObservation *)sceneObservation;
-(void)setSceneObservation:(VNSceneObservation *)arg1 ;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(void)setCustomHierarchy:(VNClassificationCustomHierarchy *)arg1 ;
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
@end

