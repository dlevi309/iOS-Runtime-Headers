/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(VNSceneObservation *)sceneObservation;
-(id)description;
-(void)setSceneObservation:(VNSceneObservation *)arg1 ;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(void)setCustomHierarchy:(VNClassificationCustomHierarchy *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

