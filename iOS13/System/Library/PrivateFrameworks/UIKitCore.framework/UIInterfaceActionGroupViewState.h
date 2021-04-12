/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {

	BOOL _isVerticalLayoutAxis;
	long long _resolvedPresentationStyle;

}

@property (nonatomic,readonly) BOOL isVerticalLayoutAxis;                        //@synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis - In the implementation block
@property (nonatomic,readonly) long long resolvedPresentationStyle;              //@synthesize resolvedPresentationStyle=_resolvedPresentationStyle - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_collectStateFromGroupViewState:(id)arg1 ;
-(BOOL)_stateEqualToGroupViewState:(id)arg1 ;
-(BOOL)isVerticalLayoutAxis;
-(long long)resolvedPresentationStyle;
-(id)copyWithVerticalLayoutAxis:(BOOL)arg1 ;
-(id)copyWithResolvedPresentationStyle:(long long)arg1 ;
@end

