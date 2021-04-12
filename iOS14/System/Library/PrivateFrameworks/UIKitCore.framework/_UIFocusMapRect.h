/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusMapArea.h>

@protocol UICoordinateSpace;
@class NSString;

@interface _UIFocusMapRect : NSObject <_UIFocusMapArea> {

	id<UICoordinateSpace> _coordinateSpace;
	CGRect _frame;

}

@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                              //@synthesize frame=_frame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UICoordinateSpace>)coordinateSpace;
-(CGRect)frame;
-(BOOL)intersectsRect:(CGRect)arg1 ;
-(BOOL)intersectsRegion:(id)arg1 ;
-(id)intersectionWithRegion:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 coordinateSpace:(id)arg2 ;
@end

