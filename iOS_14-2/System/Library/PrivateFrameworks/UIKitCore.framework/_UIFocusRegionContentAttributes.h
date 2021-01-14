/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIFocusRegion *)contentRegion;
-(void)setContentRegion:(_UIFocusRegion *)arg1 ;
-(BOOL)requiresIntersectionWithFocusMapSearchArea;
-(void)setRequiresIntersectionWithFocusMapSearchArea:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

