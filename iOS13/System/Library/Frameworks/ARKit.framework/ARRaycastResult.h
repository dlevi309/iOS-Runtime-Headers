/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class ARAnchor, NSUUID;

@interface ARRaycastResult : NSObject {

	long long _target;
	long long _targetAlignment;
	ARAnchor* _anchor;
	NSUUID* _anchorIdentifier;
	SCD_Struct_AR1 _worldTransform;
	SCD_Struct_AR1 _localTransform;

}

@property (assign,nonatomic) long long target;                             //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) ARAnchor * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 localTransform;                //@synthesize localTransform=_localTransform - In the implementation block
@property (nonatomic,retain) NSUUID * anchorIdentifier;                    //@synthesize anchorIdentifier=_anchorIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 worldTransform;              //@synthesize worldTransform=_worldTransform - In the implementation block
@property (nonatomic,readonly) long long targetAlignment;                  //@synthesize targetAlignment=_targetAlignment - In the implementation block
-(id)description;
-(void)setTarget:(long long)arg1 ;
-(long long)target;
-(ARAnchor *)anchor;
-(void)setAnchor:(ARAnchor *)arg1 ;
-(void)setLocalTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)localTransform;
-(SCD_Struct_AR1)worldTransform;
-(id)_description:(BOOL)arg1 ;
-(long long)targetAlignment;
-(id)initWithWorldTransform:(SCD_Struct_AR1)arg1 target:(long long)arg2 targetAlignment:(long long)arg3 ;
-(NSUUID *)anchorIdentifier;
-(void)setAnchorIdentifier:(NSUUID *)arg1 ;
@end

