/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIStatusBarStyleRequest, _UIStatusBarData;

@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying> {

	BOOL _hidden;
	UIStatusBarStyleRequest* _leadingStyleRequest;
	UIStatusBarStyleRequest* _trailingStyleRequest;
	_UIStatusBarData* _leadingOverlayData;
	CGRect _avoidanceFrame;
	UIEdgeInsets _statusBarInsets;

}

@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * leadingStyleRequest;               //@synthesize leadingStyleRequest=_leadingStyleRequest - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * trailingStyleRequest;              //@synthesize trailingStyleRequest=_trailingStyleRequest - In the implementation block
@property (nonatomic,readonly) CGRect avoidanceFrame;                                            //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets statusBarInsets;                                     //@synthesize statusBarInsets=_statusBarInsets - In the implementation block
@property (nonatomic,copy,readonly) _UIStatusBarData * leadingOverlayData;                       //@synthesize leadingOverlayData=_leadingOverlayData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(CGRect)avoidanceFrame;
-(UIEdgeInsets)statusBarInsets;
-(id)initWithHidden:(BOOL)arg1 leadingStyleRequest:(id)arg2 trailingStyleRequest:(id)arg3 statusBarInsets:(UIEdgeInsets)arg4 avoidanceFrame:(CGRect)arg5 leadingOverlayData:(id)arg6 ;
-(UIStatusBarStyleRequest *)leadingStyleRequest;
-(UIStatusBarStyleRequest *)trailingStyleRequest;
-(_UIStatusBarData *)leadingOverlayData;
@end

