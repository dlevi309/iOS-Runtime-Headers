/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding.h>

@protocol _UIPreviewInteractionTouchForceProviding, UICoordinateSpace;
@class NSString;

@interface _UIPreviewInteractionDecayTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding> {

	id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
	double _initialTouchForce;
	CGPoint _location;
	id<UICoordinateSpace> _coordinateSpace;
	BOOL _active;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double touchForce; 
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)cancelInteraction;
-(double)touchForce;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(id)initWithTouchForceProvider:(id)arg1 ;
@end

