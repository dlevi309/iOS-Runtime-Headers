/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIFocusRegion;

@interface _UIFocusRegionContentAttributes : NSObject <NSCopying> {

	BOOL _requiresIntersectionWithFocusMapSearchArea;
	_UIFocusRegion* _contentRegion;

}

@property (nonatomic,copy) _UIFocusRegion * contentRegion;                                 //@synthesize contentRegion=_contentRegion - In the implementation block
@property (assign,nonatomic) BOOL requiresIntersectionWithFocusMapSearchArea;              //@synthesize requiresIntersectionWithFocusMapSearchArea=_requiresIntersectionWithFocusMapSearchArea - In the implementation block
+(id)attributesForFocusRegionContentInContainer:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIFocusRegion *)contentRegion;
-(void)setContentRegion:(_UIFocusRegion *)arg1 ;
-(BOOL)requiresIntersectionWithFocusMapSearchArea;
-(void)setRequiresIntersectionWithFocusMapSearchArea:(BOOL)arg1 ;
@end

