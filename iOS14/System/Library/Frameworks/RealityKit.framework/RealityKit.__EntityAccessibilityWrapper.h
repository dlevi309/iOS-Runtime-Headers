/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)entityDescription;
-(unsigned long long)identifier;
-(NSString *)entityLabel;
-(_TtC10RealityKit28__EntityAccessibilityWrapper *)rootEntityWrapper;
-(CGRect)calculateScreenBoundingRectIn:(id)arg1 ;
-(BOOL)isEntityRoot;
-(BOOL)isEntityAccessible;
-(BOOL)isEntityActive;
@end

