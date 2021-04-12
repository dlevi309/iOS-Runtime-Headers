/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
*/


#import <RealityKit/RealityKit-Structs.h>
@class _TtC10RealityKit28__EntityAccessibilityWrapper, NSString;

@interface RealityKit.__EntityAccessibilityWrapper : NSObject {

	 entity;
	 rootEntityWrapper;

}

@property (readonly,nonatomic) _TtC10RealityKit28__EntityAccessibilityWrapper * rootEntityWrapper; 
@property (readonly,nonatomic) unsigned long long identifier; 
@property (readonly,nonatomic) BOOL isEntityRoot; 
@property (readonly,nonatomic) BOOL isEntityAccessible; 
@property (readonly,nonatomic) NSString * entityLabel; 
@property (readonly,nonatomic) NSString * entityDescription; 
@property (readonly,nonatomic) BOOL isEntityActive; 
-(id)init;
-(unsigned long long)identifier;
-(NSString *)entityDescription;
-(_TtC10RealityKit28__EntityAccessibilityWrapper *)rootEntityWrapper;
-(CGRect)calculateScreenBoundingRectIn:(id)arg1 ;
-(BOOL)isEntityRoot;
-(BOOL)isEntityAccessible;
-(NSString *)entityLabel;
-(BOOL)isEntityActive;
@end

