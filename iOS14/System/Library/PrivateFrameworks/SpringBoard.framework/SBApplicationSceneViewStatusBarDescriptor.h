/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBApplicationSceneViewStatusBarDescriptor : NSObject {

	BOOL _forceHidden;

}

@property (assign,getter=isForcedHidden,nonatomic) BOOL forceHidden;              //@synthesize forceHidden=_forceHidden - In the implementation block
+(id)statusBarDescriptorWithForceHidden:(BOOL)arg1 ;
-(void)setForceHidden:(BOOL)arg1 ;
-(id)debugDescription;
-(id)initWithForceHidden:(BOOL)arg1 ;
-(BOOL)isForcedHidden;
@end

