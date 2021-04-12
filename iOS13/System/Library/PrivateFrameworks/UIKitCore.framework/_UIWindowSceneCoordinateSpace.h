/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICoordinateSpace.h>

@class FBSSceneSettings, UIWindowScene, NSString;

@interface _UIWindowSceneCoordinateSpace : NSObject <UICoordinateSpace> {

	FBSSceneSettings* _effectiveSettings;
	UIWindowScene* _windowScene;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene;              //@synthesize windowScene=_windowScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(UIWindowScene *)windowScene;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithWindowScene:(id)arg1 effectiveSettings:(id)arg2 ;
@end

