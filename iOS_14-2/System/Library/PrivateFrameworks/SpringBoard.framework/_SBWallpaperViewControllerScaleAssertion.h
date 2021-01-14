/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBWallpaperScaleInvalidating.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperViewController, NSString;

@interface _SBWallpaperViewControllerScaleAssertion : NSObject <SBWallpaperScaleInvalidating, BSDescriptionProviding> {

	BOOL _invalidated;
	SBWallpaperViewController* _wallpaperViewController;
	double _scale;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperViewController * wallpaperViewController;              //@synthesize wallpaperViewController=_wallpaperViewController - In the implementation block
@property (readonly) double scale;                                                                      //@synthesize scale=_scale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(BOOL)isInvalidated;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)scale;
-(void)setInvalidated:(BOOL)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(SBWallpaperViewController *)wallpaperViewController;
-(void)dealloc;
-(id)initWithWallpaperViewController:(id)arg1 scale:(double)arg2 ;
-(void)invalidateWithAnimationFactory:(id)arg1 ;
@end

