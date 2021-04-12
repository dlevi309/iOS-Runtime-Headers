/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class ARAnchor;

@interface ARHitTestResult : NSObject {

	unsigned long long _type;
	double _distance;
	ARAnchor* _anchor;
	SCD_Struct_AR1 _localTransform;
	SCD_Struct_AR1 _worldTransform;

}

@property (nonatomic,retain) ARAnchor * anchor;                          //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) double distance;                            //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 localTransform;              //@synthesize localTransform=_localTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 worldTransform;              //@synthesize worldTransform=_worldTransform - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)debugQuickLookObject;
-(ARAnchor *)anchor;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setAnchor:(ARAnchor *)arg1 ;
-(void)setLocalTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)localTransform;
-(SCD_Struct_AR1)worldTransform;
-(void)setWorldTransform:(SCD_Struct_AR1)arg1 ;
-(id)_description:(BOOL)arg1 ;
@end

