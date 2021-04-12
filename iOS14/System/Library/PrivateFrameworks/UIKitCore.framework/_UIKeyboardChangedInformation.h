/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BKSAnimationFenceHandle;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _avoidIntersectability;
	BOOL _keyboardOnScreen;
	BOOL _shouldTakeSnapshot;
	NSString* _sourceSceneIdentityString;
	NSString* _sourceDisplayIdentifier;
	NSString* _sourceBundleIdentifier;
	BKSAnimationFenceHandle* _animationFence;
	CGRect _keyboardPosition;
	CGRect _keyboardPositionWithIAV;
	CGRect _keyboardPositionWithRemoteIAV;

}

@property (copy,readonly) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (readonly) CGRect keyboardPosition;                                    //@synthesize keyboardPosition=_keyboardPosition - In the implementation block
@property (readonly) CGRect keyboardPositionWithIAV;                             //@synthesize keyboardPositionWithIAV=_keyboardPositionWithIAV - In the implementation block
@property (assign) CGRect keyboardPositionWithRemoteIAV;                         //@synthesize keyboardPositionWithRemoteIAV=_keyboardPositionWithRemoteIAV - In the implementation block
@property (readonly) BOOL keyboardOnScreen;                                      //@synthesize keyboardOnScreen=_keyboardOnScreen - In the implementation block
@property (readonly) BOOL avoidIntersectability;                                 //@synthesize avoidIntersectability=_avoidIntersectability - In the implementation block
@property (assign,nonatomic) BOOL shouldTakeSnapshot;                            //@synthesize shouldTakeSnapshot=_shouldTakeSnapshot - In the implementation block
@property (nonatomic,copy) NSString * sourceSceneIdentityString;                 //@synthesize sourceSceneIdentityString=_sourceSceneIdentityString - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;                    //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceDisplayIdentifier;                   //@synthesize sourceDisplayIdentifier=_sourceDisplayIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)informationForKeyboardUp:(CGRect)arg1 withIAV:(CGRect)arg2 ;
+(id)informationForKeyboardDown;
+(id)animationFence;
-(NSString *)sourceBundleIdentifier;
-(void)setSourceSceneIdentityString:(NSString *)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceDisplayIdentifier:(NSString *)arg1 ;
-(CGRect)keyboardPosition;
-(NSString *)sourceSceneIdentityString;
-(BOOL)avoidIntersectability;
-(BOOL)shouldTakeSnapshot;
-(id)copyWithIntersectability:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)keyboardPositionWithRemoteIAV;
-(id)initWithKeyboardRect:(CGRect)arg1 iavPosition:(CGRect)arg2 onScreen:(BOOL)arg3 takeSnapshot:(BOOL)arg4 fence:(id)arg5 ;
-(id)description;
-(id)copyWithoutFence;
-(id)copyWithoutIAV;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceDisplayIdentifier;
-(void)setKeyboardPositionWithRemoteIAV:(CGRect)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
-(void)resetAnimationFencing;
-(BOOL)keyboardOnScreen;
-(CGRect)keyboardPositionWithIAV;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldTakeSnapshot:(BOOL)arg1 ;
-(void)dealloc;
@end

