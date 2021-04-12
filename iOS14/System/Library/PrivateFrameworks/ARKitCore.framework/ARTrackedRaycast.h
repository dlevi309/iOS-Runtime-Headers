/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
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
-(id)query;
-(void)stopTracking;
-(id)updateHandler;
-(id)description;
-(NSUUID *)identifier;
-(void)setTrackedQuery:(ARRaycastQuery *)arg1 ;
-(ARWorldTrackingTechnique *)attachedWorldTrackingTechnique;
-(void)setAttachedWorldTrackingTechnique:(ARWorldTrackingTechnique *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ray:(id)arg2 worldTrackingTechnique:(id)arg3 updateHandler:(/*^block*/id)arg4 ;
-(ARRaycastQuery *)trackedQuery;
@end

