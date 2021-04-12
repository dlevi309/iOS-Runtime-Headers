/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding> {

	BOOL __wantsFullScreen;
	BOOL __wantsBottomAttachedInCompactHeight;
	BOOL __widthFollowsPreferredContentSizeWhenBottomAttached;
	BOOL __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
	long long __mode;
	NSArray* __detents;
	long long __indexOfCurrentDetent;
	long long __indexOfLastUndimmedDetent;

}

@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen;                                                                                              //@synthesize _wantsFullScreen=__wantsFullScreen - In the implementation block
@property (assign,setter=_setWantsBottomAttachedInCompactHeight:,nonatomic) BOOL _wantsBottomAttachedInCompactHeight;                                                        //@synthesize _wantsBottomAttachedInCompactHeight=__wantsBottomAttachedInCompactHeight - In the implementation block
@property (assign,setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:,nonatomic) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;                        //@synthesize _widthFollowsPreferredContentSizeWhenBottomAttached=__widthFollowsPreferredContentSizeWhenBottomAttached - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode;                                                                                                               //@synthesize _mode=__mode - In the implementation block
@property (setter=_setDetents:,nonatomic,copy) NSArray * _detents;                                                                                                           //@synthesize _detents=__detents - In the implementation block
@property (assign,setter=_setIndexOfCurrentDetent:,nonatomic) long long _indexOfCurrentDetent;                                                                               //@synthesize _indexOfCurrentDetent=__indexOfCurrentDetent - In the implementation block
@property (assign,setter=_setIndexOfLastUndimmedDetent:,nonatomic) long long _indexOfLastUndimmedDetent;                                                                     //@synthesize _indexOfLastUndimmedDetent=__indexOfLastUndimmedDetent - In the implementation block
@property (assign,setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:,nonatomic) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;              //@synthesize _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge=__prefersScrollingExpandsToLargerDetentWhenScrolledToEdge - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_fullScreenConfiguration;
-(NSArray *)_detents;
-(long long)_mode;
-(BOOL)_wantsFullScreen;
-(void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(BOOL)arg1 ;
-(void)_setDetents:(id)arg1 ;
-(long long)_indexOfCurrentDetent;
-(BOOL)_widthFollowsPreferredContentSizeWhenBottomAttached;
-(BOOL)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
-(void)_setIndexOfCurrentDetent:(long long)arg1 ;
-(void)_setIndexOfLastUndimmedDetent:(long long)arg1 ;
-(long long)_indexOfLastUndimmedDetent;
-(void)_setWantsBottomAttachedInCompactHeight:(BOOL)arg1 ;
-(void)_setMode:(long long)arg1 ;
-(void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(BOOL)arg1 ;
-(BOOL)_wantsBottomAttachedInCompactHeight;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

