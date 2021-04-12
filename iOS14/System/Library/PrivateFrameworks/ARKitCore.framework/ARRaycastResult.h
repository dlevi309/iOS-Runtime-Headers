/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class ARAnchor, NSUUID;

@interface ARRaycastResult : NSObject {

	long long _target;
	long long _targetAlignment;
	ARAnchor* _anchor;
	NSUUID* _anchorIdentifier;
	SCD_Struct_AR1 _worldTransform;
	SCD_Struct_AR1 _localTransform;

}

@property (nonatomic,readonly)  worldPosition; 
@property (assign,nonatomic) long long target;                             //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) ARAnchor * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 localTransform;                //@synthesize localTransform=_localTransform - In the implementation block
@property (nonatomic,retain) NSUUID * anchorIdentifier;                    //@synthesize anchorIdentifier=_anchorIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 worldTransform;              //@synthesize worldTransform=_worldTransform - In the implementation block
@property (nonatomic,readonly) long long targetAlignment;                  //@synthesize targetAlignment=_targetAlignment - In the implementation block
-()worldPosition;
-(void)setTarget:(long long)arg1 ;
-(SCD_Struct_AR1)localTransform;
-(void)setLocalTransform:(SCD_Struct_AR1)arg1 ;
-(id)description;
-(long long)target;
-(ARAnchor *)anchor;
-(void)setAnchor:(ARAnchor *)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(id)initWithWorldTransform:(SCD_Struct_AR1)arg1 target:(long long)arg2 targetAlignment:(long long)arg3 ;
-(void)setAnchorIdentifier:(NSUUID *)arg1 ;
-(long long)targetAlignment;
-(SCD_Struct_AR1)worldTransform;
-(NSUUID *)anchorIdentifier;
@end

