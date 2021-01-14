/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_stateEqualToGroupViewState:(id)arg1 ;
-(id)init;
-(id)copyWithVerticalLayoutAxis:(BOOL)arg1 ;
-(void)_collectStateFromGroupViewState:(id)arg1 ;
-(BOOL)isVerticalLayoutAxis;
-(long long)resolvedPresentationStyle;
-(id)description;
-(id)copyWithResolvedPresentationStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

