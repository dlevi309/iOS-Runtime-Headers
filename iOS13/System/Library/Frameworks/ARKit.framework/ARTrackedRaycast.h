/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSUUID, ARWorldTrackingTechnique, ARRaycastQuery;

@interface ARTrackedRaycast : NSObject {

	NSUUID* _identifier;
	/*^block*/id _updateHandler;
	ARWorldTrackingTechnique* _attachedWorldTrackingTechnique;
	ARRaycastQuery* _trackedQuery;

}

@property (nonatomic,readonly) NSUUID * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                                                       //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,nonatomic,__weak) ARWorldTrackingTechnique * attachedWorldTrackingTechnique;              //@synthesize attachedWorldTrackingTechnique=_attachedWorldTrackingTechnique - In the implementation block
@property (retain) ARRaycastQuery * trackedQuery;                                                           //@synthesize trackedQuery=_trackedQuery - In the implementation block
-(id)description;
-(id)query;
-(NSUUID *)identifier;
-(id)updateHandler;
-(void)stopTracking;
-(void)setTrackedQuery:(ARRaycastQuery *)arg1 ;
-(ARWorldTrackingTechnique *)attachedWorldTrackingTechnique;
-(void)setAttachedWorldTrackingTechnique:(ARWorldTrackingTechnique *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ray:(id)arg2 worldTrackingTechnique:(id)arg3 updateHandler:(/*^block*/id)arg4 ;
-(ARRaycastQuery *)trackedQuery;
@end

