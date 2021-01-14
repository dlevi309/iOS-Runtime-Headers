/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class ARAnchor;

@interface ARHitTestResult : NSObject {

	unsigned long long _type;
	double _distance;
	ARAnchor* _anchor;
	SCD_Struct_AR1 _localTransform;
	SCD_Struct_AR1 _worldTransform;

}

@property (nonatomic,readonly)  worldPosition; 
@property (nonatomic,readonly)  localPosition; 
@property (nonatomic,retain) ARAnchor * anchor;                          //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) double distance;                            //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 localTransform;              //@synthesize localTransform=_localTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 worldTransform;              //@synthesize worldTransform=_worldTransform - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
-()worldPosition;
-()localPosition;
-(id)debugQuickLookObject;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(SCD_Struct_AR1)localTransform;
-(void)setLocalTransform:(SCD_Struct_AR1)arg1 ;
-(id)description;
-(unsigned long long)type;
-(ARAnchor *)anchor;
-(void)setAnchor:(ARAnchor *)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(SCD_Struct_AR1)worldTransform;
-(void)setWorldTransform:(SCD_Struct_AR1)arg1 ;
@end

